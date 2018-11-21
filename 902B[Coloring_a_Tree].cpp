#include <bits/stdc++.h>
using namespace std;

vector< int >graph[10005];
int color[10005],vis[10005],cnt;

void dfs(int s, int c){
	vis[s]=1;
	for(int i=0;i<(int)graph[s].size();i++){
		int v=graph[s][i];
		if(!vis[v]){
			if(color[v]!=c){
				cnt++;
				//cout<<v<<endl;
				dfs(v,color[v]);
			} else
				dfs(v,c);
		}
	}
}


int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		int a;
		cin>>a;
		graph[i].push_back(a);
		graph[a].push_back(i);
	}

	for(int i=1;i<=n;i++){
		cin>>color[i];
	}

	cnt=1;
	memset(vis,0,sizeof vis);
	dfs(1,color[1]);
	cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/