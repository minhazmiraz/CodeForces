#include <bits/stdc++.h>
using namespace std;
int vis[105];
int main(){
	int n;
	cin>>n;
	int maxx=1;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a; vis[a]++;
		maxx=max(maxx,vis[a]);
	}
	cout<<maxx<<endl;
	return 0;
}