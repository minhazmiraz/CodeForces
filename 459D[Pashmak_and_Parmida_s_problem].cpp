#include <bits/stdc++.h>
using namespace std;
int arr[1000005], lt[1000005], rt[1000005], tree[4*1000005];

void update(int i, int tl, int tr, int pos){
	if(tl==tr){
		tree[i]++;
	} else{
		int mid=(tl+tr)/2;
		if(pos<=mid) update(2*i, tl, mid, pos);
		else update(2*i+1, mid+1, tr, pos);
		tree[i]=tree[2*i]+tree[2*i+1];
	}
}

int query(int i, int tl, int tr, int l, int r){
	if(l>r) return 0;
	if(tl==l && tr==r) return tree[i];
	int mid=(tl+tr)/2;
	return query(2*i, tl, mid, l, min(r, mid)) + 
			query(2*i+1, mid+1, tr, max(mid+1, l), r);
}


int main(){
	unordered_map< int, int > mp;
	int n;
	scanf("%d",&n);
	int one=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(!mp[arr[i]]) one++;
		lt[i]=++mp[arr[i]];
	}
	mp.clear();
	if(one==n){
		printf("0\n");
		return 0;
	}
	for(int i=n-1;i>=0;i--){
		rt[i]=++mp[arr[i]];
	}
	long long sum=0;
	for(int i=n-1;i>=0;i--){
		//if(lt[i]==1) continue;
		sum+=query(1,0,n-1,1,lt[i]-1);
		update(1,0,n-1,rt[i]);
		//sum+=tmp;
	}
	printf("%lld\n",sum);
	return 0;
}