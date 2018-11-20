#include <bits/stdc++.h>
using namespace std;
bool vis[105];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int l,r;
		cin>>l>>r;
		for(int j=l;j<=r;j++) vis[j]=1;
	}
	int cnt=0;
	for(int i=1;i<=m;i++){
		if(!vis[i]) cnt++;
	}
	cout<<cnt<<endl;
	for(int i=1;i<=m;i++){
		if(!vis[i]) cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}