#include <bits/stdc++.h>
using namespace std;
int arr[5005];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}

	double ans=0.0;
	for(int j=k;j<=n;j++){
		for(int i=1;i<=n-j+1;i++){
			double sum = (arr[i+j-1]-arr[i-1]+0.0)/j;
			if(sum-ans>=0.0000001) ans=sum;
		}
	}

	cout<<setprecision(17)<<fixed<<ans<<endl;
	return 0;
}