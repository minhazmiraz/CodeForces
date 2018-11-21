#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
#define mx 7015
int ar[mx], t[4*mx], lazy[mx], n;

void build(int i, int tl, int tr){
	if(tl==tr) t[i]=tl;
	else{
		int tm=(tl+tr)/2;
		build(2*i,tl,tm);
		build(2*i+1,tm+1,tr);
		if(ar[t[2*i]]<ar[t[2*i+1]]) t[i]=t[2*i];
		else t[i]=t[2*i+1];
	}
}



int query(int i, int tl, int tr, int l, int r){
	//cout<<tl<<" "<<tr<<" "<<l<<" "<<r<<endl;
	if(l>r) return n;
	if(tl==l && tr==r) return /*cout<<t[i]<<endl,*/ t[i];
	else{
		int tm=(tl+tr)/2;
		int a=query(2*i,tl,tm,l,min(tm,r));
		int b=query(2*i+1,tm+1,tr,max(tm+1,l),r);
		//cout<<a<<" "<<b<<endl;
		return ar[a]<ar[b]?a:b;
	}
}


int dp[mx][mx];
int func(int l, int r, int h){
	if(l>r) return 0;
	int pos=query(1,0,n-1,l,r);
	int val=ar[pos];
	//cout<<"res: "<<pos<<" "<<val<<endl;
	return min(r-l+1,func(l,pos-1,val)+func(pos+1,r,val)+val-h);
}

int main() {
    //ios_base::sync_with_stdio(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	ar[n]=INT_MAX;
	build(1,0,n-1);
	memset(dp,-1,sizeof dp);
	cout<<func(0,n-1,0)<<endl;
    return 0;
}
