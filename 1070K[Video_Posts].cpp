#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
	int n,k;
	cin>>n>>k;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}

	if(sum%k!=0) return cout<<"No\n", 0;
	vector< int > vc;
	int tsum=0, cnt=0;
	for(int i=1;i<=n;i++){
		tsum+=arr[i];
		cnt++;
		if(tsum==(sum/k)){
			vc.push_back(cnt);
			cnt=0;
			tsum=0;
		} else if(tsum>(sum/k))  return cout<<"No\n", 0;
	}
	cout<<"Yes\n";
	for(int i=0;i<vc.size();i++){
		cout<<vc[i]<<" ";
	}
	cout<<"\n";
	return 0;
}