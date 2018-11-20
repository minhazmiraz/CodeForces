#include <bits/stdc++.h>
using namespace std;
vector< int > vc;
int vis[105];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a;
		cin>>a;
		vis[a]++;
	}
	for(int i=1;i<=100;i++){
		if(vis[i]) vc.push_back(vis[i]);
	}
	sort(vc.begin(), vc.end());
	int maxx=0;
	for(int i=1;i<=100;i++){
		int sum=0;
		for(int j=0;j<vc.size();j++){
			sum+=(int)(vc[j]/i);
		}
		//cout<<div<<" ";
		if(sum>=n) maxx=max(maxx,i);
	}
	cout<<maxx<<endl;
	return 0;
}