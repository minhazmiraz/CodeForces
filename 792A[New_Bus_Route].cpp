#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long arr[n+5];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long minn=10e12,cnt=0;
	for(int i=1;i<n;i++){
		long long temp=abs(arr[i]-arr[i-1]);
		if(minn>temp){
			minn=min(minn,temp);
			cnt=1;
		}
		else if(temp==minn)
			cnt++;
	}
	cout<<minn<<" "<<cnt<<"\n";
}