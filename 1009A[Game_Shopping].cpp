#include <bits/stdc++.h>
using namespace std;
int arr[1005], wa[1005];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>arr[i];
	for(int i=1;i<=m;i++) cin>>wa[i];

	int cnt=0;
	for(int i=1, j=1;i<=n;i++){
		if(arr[i]<=wa[j]){
			cnt++; j++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}