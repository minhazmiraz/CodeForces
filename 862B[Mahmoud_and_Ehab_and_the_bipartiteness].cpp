#include <bits/stdc++.h>
using namespace std;
vector< int > graph[100005];
bool vis[100005];
long long part[2];
void dfs(int s, int f){
	vis[s]=1; part[f]++;
	for(int i=0;i<graph[s].size();i++){
		int v=graph[s][i];
		if(!vis[v]){
			dfs(v,!f);
		}
	}
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

	memset(vis,0,sizeof vis);
	part[0]=part[1]=0;
	dfs(1,0);
	long long ans=(part[0]*part[1])-(n-1);
	cout<<ans<<endl;
	return 0;
}