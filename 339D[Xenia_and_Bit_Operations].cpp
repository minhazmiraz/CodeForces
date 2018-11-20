#include <bits/stdc++.h>
using namespace std;
int arr[200005], tree[400005];
void build(int i, int tl, int tr, bool f){
	if(tl==tr) tree[i]=arr[tl];
	else{
		int mid=(tl+tr)/2;
		build(2*i, tl, mid,!f);
		build(2*i+1, mid+1, tr,!f);
		if(f) tree[i]=tree[2*i] | tree[2*i+1];
		else tree[i]=tree[2*i] ^ tree[2*i+1];
	}
}

void update(int i, int tl, int tr, int pos, int val, bool f){
	if(tl==tr) tree[i]=val;
	else{
		int mid=(tl+tr)/2;
		if(pos<=mid) update(2*i, tl, mid, pos, val, !f);
		else update(2*i+1, mid+1, tr, pos, val, !f);

		if(f) tree[i]=tree[2*i] | tree[2*i+1];
		else tree[i]=tree[2*i] ^ tree[2*i+1];
	}
}


int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=(1<<n);i++){
		cin>>arr[i];
	}
	bool f;
	if(n%2==0) f=0;
	else f=1;
	build(1,1,(1<<n),f);
	//cout<<tree[1]<<endl;
	for(int i=1;i<=m;i++){
		int p,q;
		cin>>p>>q;
		update(1,1,(1<<n),p,q,f);
		cout<<tree[1]<<endl;
	}
	return 0;
}