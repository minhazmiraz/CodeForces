#include <bits/stdc++.h>
using namespace std;

int arr[105], n, dp[105][5];

int go(int i, int prev){
	if(dp[i][prev]!=-1) return dp[i][prev];
	if(i>n) return 0;
	int tmp=0;
	if(arr[i]==0) return 1+go(i+1,0);
	else if(arr[i]==1){
		tmp=1+go(i+1,0);
		if(prev!=2) tmp=min(tmp, go(i+1, 2));
	} else if(arr[i]==2){	
		tmp=1+go(i+1,0);
		if(prev!=1) tmp=min(tmp, go(i+1, 1));
	} else if(arr[i]==3){
		tmp=1+go(i+1,0);
		if(prev!=1) tmp=min(tmp, go(i+1, 1));
		if(prev!=2) tmp=min(tmp, go(i+1, 2));
	}
	return dp[i][prev]=tmp;
}


int main(){
	cin>>n;
	memset(dp,-1,sizeof dp);
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	cout<<go(1,-1)<<endl;
	return 0;
}