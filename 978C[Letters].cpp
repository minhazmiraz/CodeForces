#include <bits/stdc++.h>
using namespace std;
long long arr[200005], letter[200005];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}

	for(int i=1;i<=m;i++){
		cin>>letter[i];
		int room = lower_bound(arr+1, arr+n+1, letter[i])-(arr+1);
		cout<<room+1<<" "<<letter[i]-arr[room]<<endl;
	}
	return 0;
}