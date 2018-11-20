#include <bits/stdc++.h>
using namespace std;
int arr[200005];
int main(){
	int n,s;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==1){
		cout<<abs(s-arr[0])<<endl;
		return 0;
	}
	sort(arr,arr+n);
	int pos=(n/2);
	int uppos=upper_bound(arr,arr+n,s)-arr;
	uppos--;
	int lopos=lower_bound(arr,arr+n,s)-arr;
	if(uppos>=pos && lopos<=pos){
		cout<<"0\n";
	} else if(lopos<=pos){
		long long op=0;
		for(int i=lopos;i<=pos;i++){
			op+=abs(s-arr[i]);
		}
		cout<<op<<endl;
	} else if(lopos>=pos){
		long long op=0;
		for(int i=pos;i<lopos;i++){
			op+=abs(s-arr[i]);
		}
		cout<<op<<endl;
	}
	return 0;
}