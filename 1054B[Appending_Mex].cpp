#include <bits/stdc++.h>
using namespace std;

map< int, bool > vis;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		vis[a]=1;
		if(i==1 && a!=0) return cout<<i<<"\n", 0;
		if(a!=0 && !vis[a-1]) return cout<<i<<"\n", 0;
	}
	cout<<"-1\n";
	return 0;
}