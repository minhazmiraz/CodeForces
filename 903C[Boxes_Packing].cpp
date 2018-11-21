#include <bits/stdc++.h>
using namespace std;
long long arr[5005],n;


int main(){
	//int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);

	long long a=0;
	int cnt=0,maxx=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=a){
			a=arr[i];
			maxx=max(maxx,cnt);
			cnt=1;
		} else
			cnt++;
	}
	maxx=max(maxx,cnt);

	cout<<maxx<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/