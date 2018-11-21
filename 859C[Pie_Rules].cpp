#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100],qsum[100],dp[100][100];

void d(int i, int p){
	if(dp[i][p]!=-1)
		return;
	if(i==n){
		dp[i][p]=arr[n];
		return;
	}
	d(i+1,!p);
	d(i+1,p);
	dp[i][p]=max(arr[i]+(qsum[i+1]-dp[i+1][!p]),dp[i+1][p]);
	return;
}


int main(){


	cin>>n;

	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	qsum[n]=arr[n];
	for(int i=n-1;i>=1;i--)
		qsum[i]=qsum[i+1]+arr[i];
	memset(dp,-1,sizeof dp);

	d(1,1);
	cout<<qsum[1]-dp[1][1]<<" "<<dp[1][1]<<endl;
	return 0;
}