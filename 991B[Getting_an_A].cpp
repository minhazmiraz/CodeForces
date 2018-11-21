#include <bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
	int n, sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n);
	if((sum/(n+.0))>=4.5) return cout<<"0\n", 0;
	int cnt=0;
	for(int i=0;i<n;i++){
		sum+=(5-arr[i]);
		cnt++;
		if((sum/(n+.0))>=4.5) return cout<<cnt<<"\n", 0;
	}
	return 0;
}