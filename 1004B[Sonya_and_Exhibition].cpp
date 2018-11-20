#include <bits/stdc++.h>
using namespace std;
pair< int,int > arr[1005];
int ans[1005];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>arr[i].first>>arr[i].second;
	}
	bool f=0;
	for(int i=1;i<=n;i++){
		cout<<f;
		f=!f;
	}
	cout<<endl;
	return 0;
}