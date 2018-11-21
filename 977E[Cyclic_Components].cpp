#include <bits/stdc++.h>
using namespace std;
vector< int > graph[200005];
int deg[200005];
int vis[200005];
int cycle, vertex;
void dfs(int x, int from){
	vis[x]=1;
	if(deg[x]!=2) vertex=0;
	for(int i=0;i<graph[x].size();i++){
		int v=graph[x][i];
		if(v==from) continue;
		else if(vis[v]==0){
			dfs(v, x);
		} else if(vis[v]==1){
			cycle++;
		}
	}
	vis[x]=2;
}

int main(){
	int n, m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
		deg[u]++;
		deg[v]++;
	}
	memset(vis,0,sizeof vis);
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vertex=1, cycle=0;
			dfs(i,-1);
			if(cycle==1 && vertex==1) cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}