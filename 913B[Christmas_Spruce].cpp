#include <bits/stdc++.h>
using namespace std;

vector< int > graph[10005];
int child[1005];
int dfs(int s, int from){
	if(graph[s].size()==1){
		child[s]=3;
		return 1;
	}
	for(int i=0;i<(int)graph[s].size();i++){
		int to=graph[s][i];
		if(to==from) continue;
		child[s]+=dfs(to,s);
	}
	return 0;
}


int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		int a;
		cin>>a;
		graph[a].push_back(i);
		graph[i].push_back(a);
	}
	dfs(1,-1);
	int f=1;
	for(int i=1;i<=n;i++){
		if(child[i]<3){
			//cout<<i<<endl;
			f=0;
		}
	}
	if(f==0)
		cout<<"No\n";
	else
		cout<<"Yes\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/