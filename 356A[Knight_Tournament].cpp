#include <bits/stdc++.h>
using namespace std;
int tree[1200005][3];

void push(int i, int tl, int tr){
	if(tree[i][0]){
		//cout<<tl<<' '<<tr<<endl;	
		//cout<<tree[i][0]<<" "<<tree[i][1]<<endl;
		if(!tree[2*i][0]){
			tree[2*i][0]=tree[i][0];
		} else if(tree[2*i][0]!=tree[i][0]){
			if(!tree[2*i][1]) tree[2*i][1]=tree[i][0];
		}

		if(!tree[2*i][0]){
			tree[2*i][0]=tree[i][1];
		} else if(tree[2*i][0]!=tree[i][1]){
			if(!tree[2*i][1]) tree[2*i][1]=tree[i][1];
		}

		if(!tree[2*i+1][0]){
			tree[2*i+1][0]=tree[i][0];
		} else if(tree[2*i+1][0]!=tree[i][0]){
			if(!tree[2*i+1][1]) tree[2*i+1][1]=tree[i][0];
		}

		if(!tree[2*i+1][0]){
			tree[2*i+1][0]=tree[i][1];
		} else if(tree[2*i+1][0]!=tree[i][1]){
			if(!tree[2*i+1][1]) tree[2*i+1][1]=tree[i][1];
		}

		tree[i][0]=0, tree[i][1]=0;
		//cout<<tree[2*i][0]<<" "<<tree[2*i][1]<<" "<<tree[2*i+1][0]<<" "<<tree[2*i+1][1]<<endl;
	}
}

void update(int i, int tl, int tr, int l, int r, int val){
	if(l>r) return;
	if(tl==l && tr==r){
		//if(tl!=tr) push(i, tl, tr);
		if(!tree[i][0]) tree[i][0]=val;
		else if(tree[i][0]!=val) if(!tree[i][1]) tree[i][1]=val;
	} else{
		int mid=(tl+tr)/2;
		push(i, tl, tr);
		update(2*i, tl, mid, l, min(mid,r), val);
		update(2*i+1, mid+1, tr, max(mid+1, l), r, val);
	}
}

int query(int i, int tl, int tr, int pos){
	if(tl==tr){
		return (tree[i][0]!=tl)?tree[i][0]:tree[i][1];
	} else{
		int mid=(tl+tr)/2;
		push(i, tl, tr);
		if(pos<=mid) return query(2*i,tl,mid,pos);
		else return query(2*i+1,mid+1,tr,pos);
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	//for(int i=0;i<1200005;i++) tree[i].clear();
	for(int i=1;i<=m;i++){
		int l,r,x;
		cin>>l>>r>>x;
		update(1,1,n,l,r,x);
	}
	for(int i=1;i<=n;i++){
		int ans=query(1,1,n,i);
		cout<<ans<<" ";
	}
	cout<<endl;
	return 0;
}