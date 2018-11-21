#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==1){
		cout<<arr[0]<<endl;
		return 0;
	}

	sort(arr,arr+n);
	if(n%2!=0){
		int tmp=(n/2);
		cout<<arr[tmp]<<endl;
	} else{
		int tmp=(n/2)-1;
		cout<<arr[tmp]<<endl;
	}
	return 0;
}