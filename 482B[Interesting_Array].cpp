#include <bits/stdc++.h>
using namespace std;
typedef pair< pair< int, int >, int > pii;
vector< pii > vc;
bool comp(pii a, pii b){
	if(a.first.first>b.first.second) return 1;
	else if(a.first.first==b.first.first)
		return a.first.second<b.first.second;
	return 0;
}


int tree[400005];
void push(int i, int val){
	
}

void update(int i, int tl, int tr, int l, int r, int val){
	if(l>r) return;
	else if(tl==l && tr==r){
		tree[i]|=val;
		return;
	}
	int mid=(tl+tr)/2;
	tree[2*i]|=tree[i];
	tree[2*i+1]|=tree[i];
	update(2*i, tl, mid, l, min(mid, r), val);
	update(2*i+1, mid+1, tr, max(mid+1,l), r, val);
}

int query(int i, int tl, int tr, int l, int r){
	if(l>r) return -1;
	if(tl==l && tr==r){
		return tree[i];
	}
	int mid=(tl+tr)/2;
	tree[2*i]|=tree[i];
	tree[2*i+1]|=tree[i];
	int a = query(2*i, tl, mid, l, min(mid,r));
	int b = query(2*i+1, mid+1, tr, max(mid+1,l), r);
	if(a==-1) return b;
	if(b==-1) return a;
	return a&b;
}

int main(){
	int n, m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int l,r,q;
		cin>>l>>r>>q;
		vc.push_back({{l,r},q});
	}
	
	for(int i=0;i<m;i++){
		int l=vc[i].first.first;
		int r=vc[i].first.second;
		int val=vc[i].second;
		update(1,1,n,l,r,val);
	}

	for(int i=0;i<m;i++){
		int l=vc[i].first.first;
		int r=vc[i].first.second;
		int val=vc[i].second;
		int tmp = query(1,1,n,l,r);
		if(tmp!=val){
			cout<<"NO\n";
			return 0;
		}
	}

	cout<<"YES\n";
	for(int i=1;i<=n;i++){
		cout<<query(1,1,n,i,i)<<" ";
	}
	return 0;
}