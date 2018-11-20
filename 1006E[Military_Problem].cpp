#include <bits/stdc++.h>
using namespace std;

set< int > graph[200005];
vector< int > vc;
int finish[200005], cnt, child[200005];
bool vis[200005];
int dfs(int s){
	vis[s]=1;
	vc.push_back(s);
	finish[s]=++cnt;
	for(auto i=graph[s].begin();i!=graph[s].end();i++){
		int v=*i;
		if(!vis[v]) child[s]+=dfs(v);
	}
	return child[s]+1;
}

int main(){
	int n,q;
	cin>>n>>q;
	for(int i=2;i<=n;i++){
		int a;
		cin>>a;
		graph[a].insert(i);
	}
	cnt=0;
	dfs(1);
	for(int i=1;i<=q;i++){
		int u,k;
		cin>>u>>k;
		k--;
		int tmp=finish[u]+k;
		tmp--;
		if(k<=child[u]) cout<<vc[tmp]<<endl;
		else cout<<"-1\n";
	}
	return 0;
}