#include <bits/stdc++.h>
using namespace std;
bool vis[1005];
int main(){
	int n;
	cin>>n;
	int arr[100];
	vector< int > vc;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=n;i>0;i--){
		if(!vis[arr[i]]) vc.push_back(arr[i]), vis[arr[i]]=1;
	}

	cout<<vc.size()<<endl;
	for(int i=vc.size()-1;i>=0;i--){
		cout<<vc[i]<<" ";
	}
	cout<<endl;
	return 0;
}