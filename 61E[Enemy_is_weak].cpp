#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int arr[MAX], tmp[MAX], coun[MAX], pos[MAX];
long long tree[2][4*MAX];

void update(bool f, int i, int tl, int tr, int pos, long long val){
	if(tl==tr){
		tree[f][i]=val;
	} else{
		int tm=(tl+tr)/2;
		if(pos<=tm) update(f, 2*i, tl, tm, pos, val);
		else update(f, 2*i+1, tm+1, tr, pos, val);
		tree[f][i]=tree[f][2*i]+tree[f][2*i+1];
	}
}

long long query(int f, int i, int tl, int tr, int l, int r){
	if(l>r) return 0;
	if(tl==l && tr==r){
		return tree[f][i];
	} else{
		int tm=(tl+tr)/2;
		return query(f, 2*i, tl, tm, l, min(tm, r)) + 
				query(f, 2*i+1, tm+1, tr, max(tm+1, l), r);
	}	
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		tmp[i-1]=arr[i];
	}
	sort(tmp, tmp+n);

	for(int i=n;i>0;i--){
		pos[i] = lower_bound(tmp, tmp+n, arr[i])-tmp;
		coun[i]=query(0, 1, 1, n, 1, pos[i]);
		update(0, 1, 1, n, pos[i]+1, 1LL);
	}

	long long ans=0;
	for(int i=n;i>0;i--){
		ans+=query(1, 1, 1, n, 1, pos[i]);
		update(1, 1, 1, n, pos[i]+1, coun[i]);
	}

	cout<<ans<<endl;
	return 0;
}