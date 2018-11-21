#include <bits/stdc++.h>
using namespace std;
vector< int > graph[105];
int degree[105];


int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		degree[u]++; degree[v]++;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	bool flag=true;
	int cnt=0;
	while(flag){
		queue< int > q;
		for(int i=1;i<=n;i++){
			if(degree[i]==1) q.push(i), degree[i]--;
		}

		if(q.empty()) flag=false;
		else cnt++;

		while(!q.empty()){
			int u=q.front(); q.pop();
			for(int i=0;i<graph[u].size();i++){
				int v=graph[u][i];
				degree[v]--;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}