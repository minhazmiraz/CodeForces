#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long arr[n+5];
	long long minn=1e18;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		minn=min(minn,arr[i]);
	}

	int temp,f=0,ans=INT_MAX;
	for(int i=1;i<=n;i++){
		if(!f && arr[i]==minn){
			temp=i; f=1;
		} else if(arr[i]==minn){
			ans=min(ans,i-temp);
			temp=i;
		}
	}
	cout<<ans<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/