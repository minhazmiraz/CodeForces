#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define MAX 100009

vector< int > graph[MAX];
bool vis[MAX];
double ans[MAX];

void dfs(int src){
	vis[src]=1;
	ans[src]=0.0;
	int u=src;
	long long child=0;
	double ex=0.0;
	for(int i=0;i<(int)graph[u].size();i++){
		int v = graph[u][i];
		if(!vis[v]){
			dfs(v);
			ex+=ans[v];
			child++;
		}
	}
	if(child>0)
		ans[u] = ((double)ex/(double)child)+1.0;
	//cout<<ans[u]<<endl;
}

int main(){
	int n;
	cin>>n;
	memset(vis,0,sizeof vis);
	for(int i=1;i<n;i++){
		int u,v;
		cin>>u>>v;
		graph[u].pb(v);
		graph[v].pb(u);
	}
	dfs(1);
	//cout<<res<<endl;
	printf("%0.15lf\n",ans[1]);
	return 0;
}

