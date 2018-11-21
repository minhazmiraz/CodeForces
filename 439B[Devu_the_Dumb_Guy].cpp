#include <bits/stdc++.h>
using namespace std;
long long arr[100005];
int main(){
	long long n,x;
	cin>>n>>x;
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	long long ans=0;
	for(int i=0;i<n;i++){
		ans+=arr[i]*x;
		if(x>1) x--;
	}
	cout<<ans<<endl;
	return 0;
}