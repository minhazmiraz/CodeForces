#include <bits/stdc++.h>
using namespace std;
#define mx 100010


vector < int > graph[mx];

int vis[mx],dist[mx];
int cnt[mx];

int bfs(int src){
	queue < int > cont;
	vis[src]=1;
	dist[src]=0;
	cont.push(src);
	while(!cont.empty()){
		int u=cont.front();
		cont.pop();
		for(int i=0;i<graph[u].size();i++){
			int temp=graph[u][i];
			if(!vis[temp]){
				vis[temp]=1;
				dist[temp]=dist[u]+1;
				cnt[dist[temp]]++;
				cont.push(temp);
			}
		}
	}

	int i=1,coun=0;
	while(cnt[i]){
		if(cnt[i]%2!=0) coun++;
		i++;
	}
	return coun;
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

	cout<<bfs(1)+1<<endl;

	return 0;
}

/*
	Powered by Buggy plugin
*/