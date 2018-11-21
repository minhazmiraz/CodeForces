#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+5];
	cin>>arr[0];
	int g=arr[0];
	for(int i=1;i<n;i++) cin>>arr[i], g=__gcd(g,arr[i]);
	if(g!=arr[0])
		return cout<<"-1\n", 0;
	cout<<2*n<<endl;
	for(int i=0;i<n;i++) cout<<arr[0]<<" "<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/