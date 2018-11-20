#include <bits/stdc++.h>
using namespace std;


int arr[200005],n,m,k;

int solve(int ans){
	long long sum=0;
	int cnt=0;
	for(int i=ans;i<=n;i++){
		sum+=arr[i];
		if(sum>k && arr[i]<=k){
			sum=arr[i];	
			cnt++;
		} else if(arr[i]>k){
			return 0;
		}
	}
	if(sum) cnt++;
	if(cnt<=m) return 1;
	return 0;
}


int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	int lo=1, hi=n, mid;
	while(lo<=hi){
		mid=(lo+hi)/2;
		if(solve(mid)) hi=mid-1;
		else lo=mid+1;
	}
	cout<<n-lo+1<<endl;
	return 0;
}