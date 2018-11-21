#include <bits/stdc++.h>
using namespace std;


int vis[100005];
long long arr[100005],minn;

vector< int > graph[100005];

void dfs(int s){
	vis[s]=1;
	for(int i=0;i<(int)graph[s].size();i++){
		int v=graph[s][i];
		if(!vis[v]){
			minn=min(minn,arr[v]);
			dfs(v);
		}
	}
}


int main(){
	memset(vis,0,sizeof vis);
	for(int i=1;i<=100000;i++)
		graph[i].clear();
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	long long sum=0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			minn=arr[i];
			dfs(i);
			sum+=minn;
		}
	}

	cout<<sum<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/