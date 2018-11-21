#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long arr[200005], sum=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}

	sum=(sum+1)/2;

	long long tsum=0;
	int i;
	for(i=1;i<=n;i++){
		tsum+=arr[i];
		if(tsum>=sum) break;
	}
	cout<<i<<endl;
	return 0;
}