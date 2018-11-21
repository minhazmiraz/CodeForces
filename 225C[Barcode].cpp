#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, dp[1005][3][1005], dot[1005];
string str[1005];

// 0 for Hash, 1 for Dot
int func(int i, int grp, int type){
	if(grp>y) return (n*m)+1;
	if(i==m){
		if(grp<x) return (n*m)+1;
		else return 0;
	}
	if(dp[i][type][grp]!=-1) return dp[i][type][grp];

	int p=n*m + 1;
	if(type==0){ 
		p=n-dot[i]+func(i+1, grp+1, 0);
		if(grp>=x || i==0) p=min(p, dot[i]+func(i+1, 1, 1));
	} else{
		if(type==1) p=min(p, dot[i]+func(i+1, grp+1, 1));
		if(grp>=x || i==0) p=min(p, n-dot[i]+func(i+1, 1, 0));
	}
	
	p=min(p,(n*m)+1);

	return dp[i][type][grp]=p;
}

int main(){
	memset(dp, -1, sizeof dp);
	cin>>n>>m>>x>>y;
	for(int i=0;i<n;i++) cin>>str[i];
	for(int i=0;i<m;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(str[j][i]=='.') cnt++;
		}
		dot[i]=cnt;
	}

	cout<<func(0, 0, 0)<<endl;
	return 0;
}