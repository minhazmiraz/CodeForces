#include <bits/stdc++.h>
using namespace std;
int dp[100015],X[100005],H[100005];
int n;

int func(int i, int prev){
	if(dp[i]!=-1)
		return dp[i];
	if(i>n)
		return 0;
	if(i==n)
		return 1;
	int p1=0,p2=0;
	if(prev<X[i]-H[i])
		p1=1+func(i+1,X[i]);
	else{
		if(X[i+1]>X[i]+H[i])
			p1=1+func(i+1,X[i]+H[i]);
		p1=max(p1,func(i+1,X[i]));
	}
	return dp[i]=p1;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,h;
		cin>>x>>h;
		X[i]=x, H[i]=h;
	}

	int ans=1;
	memset(dp,-1,sizeof dp);
	ans+=func(2,X[1]);
	cout<<ans<<endl;
	return 0;
}