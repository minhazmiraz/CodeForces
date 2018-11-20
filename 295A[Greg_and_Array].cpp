#include <bits/stdc++.h>
using namespace std;
#define LL long long
typedef pair< LL, pair< LL, LL > > pii;
LL n,m,k, arr[100005], tree[3][400005], lazy[3][400005];
pii Q[100005];


void push(int f, int i, int tl, int mid, int tr){
	tree[f][2*i]+=lazy[f][i]*(mid-tl+1);
	tree[f][2*i+1]+=lazy[f][i]*(tr-mid);
	lazy[f][2*i]+=lazy[f][i];
	lazy[f][2*i+1]+=lazy[f][i];
	lazy[f][i]=0;
}


void update(int f, int i, int tl, int tr, int l, int r, LL val){
	if(l>r) return;
	if(tl==l && tr==r){
		tree[f][i]+=(r-l+1LL)*val;
		lazy[f][i]+=val;
		return;
	}
	int mid=(tl+tr)/2;
	push(f, i, tl, mid, tr);
	update(f, 2*i, tl, mid, l, min(mid,r), val);
	update(f, 2*i+1, mid+1, tr, max(mid+1,l), r, val);
}

LL query(int f, int i, int tl, int tr, int l, int r){
	if(l>r) return 0;
	if(tl==l && tr==r){
		return tree[f][i];
	}
	int mid=(tl+tr)/2;
	push(f, i, tl, mid, tr);
	return query(f, 2*i, tl, mid, l, min(mid,r))+
			query(f, 2*i+1, mid+1, tr, max(mid+1,l), r);
}

int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	for(int i=1;i<=m;i++){
		int l,r,val;
		cin>>l>>r>>val;
		Q[i]={val,{l,r}};
	}

	for(int i=1;i<=k;i++){
		int l,r;
		cin>>l>>r;
		update(0,1,1,m,l,r,1LL);
	}

	for(int i=1;i<=m;i++){
		int l = Q[i].second.first;
		int r = Q[i].second.second;
		int val = Q[i].first;
		LL tmp = query(0,1,1,m,i,i);
		//cout<<l<<" "<<r<<" "<<val*tmp<<endl;
		update(1,1,1,n,l,r,val*tmp);
	}

	for(int i=1;i<=n;i++){
		LL tmp = query(1,1,1,n,i,i);
		cout<<arr[i]+tmp<<" ";
	}
	cout<<endl;
	return 0;
}