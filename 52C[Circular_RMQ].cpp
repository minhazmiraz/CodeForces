#include <bits/stdc++.h>
using namespace std;
#define MAX 200005
int arr[MAX];
long long tree[4*MAX], lazy[4*MAX];
void build(int i, int tl, int tr){
	if(tl==tr) tree[i]=arr[tl];
	else{
		int mid=(tl+tr)/2;
		build(2*i, tl, mid);
		build(2*i+1, mid+1, tr);
		tree[i]=min(tree[2*i], tree[2*i+1]);
	}
}

void push(int i, int tl, int tr){
	tree[2*i]+=lazy[i];
	tree[2*i+1]+=lazy[i];
	lazy[2*i]+=lazy[i];
	lazy[2*i+1]+=lazy[i];
	lazy[i]=0;
}


void update(int i, int tl, int tr, int l, int r, int v){
	if(l>r) return;
	if(tl==l && r==tr){
		tree[i]+=(long long) v;
		lazy[i]+=(long long) v;
	} else{
		push(i, tl, tr);
		int mid=(tl+tr)/2;
		update(2*i, tl, mid, l, min(mid, r), v);
		update(2*i+1, mid+1, tr, max(mid+1, l), r, v);
		tree[i]=min(tree[2*i], tree[2*i+1]);
	}
}

long long query(int i, int tl, int tr, int l, int r){
	if(l>r) return 9e18;
	if(tl==l && r==tr){
		return tree[i];
	} else{
		push(i, tl, tr);
		int mid=(tl+tr)/2;
		return min(query(2*i, tl, mid, l, min(mid, r)),
				query(2*i+1, mid+1, tr, max(mid+1, l), r));
	}
}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	build(1,0,n-1);
	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r,v;
		cin>>l>>r;
		char ch=getchar();
		if(ch==' '){
			cin>>v;
			if(l>r){
				update(1, 0, n-1, 0, r, v);
				update(1, 0, n-1, l, n-1, v);
			} else{
				update(1, 0, n-1, l, r, v);
			}
		} else{
			if(l>r){
				long long minL=query(1, 0, n-1, 0, r);
				long long minR=query(1, 0, n-1, l, n-1);
				cout<<min(minL, minR)<<endl;
			} else{
				cout<<query(1, 0, n-1, l, r)<<endl;
			}
		}
	}
	return 0;
}