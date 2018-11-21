#include <bits/stdc++.h>
using namespace std;

vector< int > graph[100005];
int cnt, vis[100005];

int dfs(int to, int from){
	vis[to]=1;
	int child=0;
	for(int i=0;i<(int)graph[to].size();i++){
		int v=graph[to][i];
		if(v==from) continue;
		if(!vis[v]){
			int tmp=dfs(v,to);
			if(tmp%2==0) cnt++;
			else child+=tmp;
		}
	}
	return child+1;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	cnt=0;
	int tmp=dfs(1,-1);
	if(tmp%2!=0) cout<<"-1\n";
	else cout<<cnt<<endl;
	return 0;
}