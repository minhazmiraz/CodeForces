#include <bits/stdc++.h>
using namespace std;
vector< int > ind;
int vis[105];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(!vis[a]) ind.push_back(i), vis[a]=1;
	}
	if(ind.size()<k) cout<<"NO\n";
	else{
		cout<<"YES\n";
		for(int i=0;i<k;i++){
			cout<<ind[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}