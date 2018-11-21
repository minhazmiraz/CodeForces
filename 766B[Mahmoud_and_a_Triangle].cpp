#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=1;i<n-1;i++){
		if((arr[i]-arr[i-1]) + (arr[i+1]-arr[i]) <= arr[i]-1){
			//cout<<arr[i-1]<<" "<<arr[i]<<" "<<arr[i+1]<<endl;
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}