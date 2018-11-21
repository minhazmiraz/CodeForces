#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,arr[105],sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		sum+=abs(arr[i]-0);
	}
	cout<<sum<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/