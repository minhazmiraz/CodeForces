#include <bits/stdc++.h>
using namespace std;
#define mx 500005
int n,q,arr[mx],t[4*mx];

void build(int i, int tl, int tr){
	if(tl==tr) t[i]=arr[tl];
	else{
		int tm=(tl+tr)/2;
		build(2*i,tl,tm);
		build(2*i+1,tm+1,tr);
		t[i]=__gcd(t[2*i],t[2*i+1]);
	}
}

void update(int i, int tl, int tr, int l, int x){
	if(tl==tr and tl==l) t[i]=x;
	else{
		int tm=(tl+tr)/2;
		if(l<=tm) update(2*i, tl, tm, l, x);
		if(l>tm) update(2*i+1, tm+1, tr, l, x);
		t[i]=__gcd(t[2*i],t[2*i+1]);
	}
}

int query(int i, int tl, int tr, int l, int r, int x){
	if(l>r) return 0;
	if(tl==tr) return (t[i]%x!=0);
	int tm=(tl+tr)/2;
	if(tl==l and tr==r){
		if(t[2*i]%x!=0 and t[2*i+1]%x==0) return query(2*i, tl, tm, l, min(r,tm), x);
		else if(t[2*i]%x==0 and t[2*i+1]%x!=0) return query(2*i+1, tm+1, tr, max(l,tm+1), r, x);
		else if(t[2*i]%x!=0 and t[2*i+1]%x!=0) return 2;
		else return 0;
	}
	return query(2*i, tl, tm, l, min(r,tm), x)
			+query(2*i+1, tm+1, tr, max(l,tm+1), r, x);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
	build(1,1,n);
	cin>>q;
	for(int i=1;i<=q;i++){
		int type,l,r,x;
		scanf("%d",&type);
		if(type==1){
			scanf("%d%d%d",&l,&r,&x);
			if(query(1,1,n,l,r,x)<=1) cout<<"YES\n";
			else cout<<"NO\n";
		} else{
			scanf("%d%d",&l,&x);
			update(1,1,n,l,x);
		}
	}
	return 0;
}