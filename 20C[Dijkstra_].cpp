#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y
#define NL printf("\n")
#define SP printf(" ")
typedef map< int, vector< pair<int,int> > > mpiii;
mpiii graph;
long long dist[100010];
map<int,int> par;

void dijkstra(int source, int dest){
	set< pair<long long,int> > st;
	st.insert({0,source});
	par[source]=-1;
	dist[source]=0;
	while(!st.empty()){
		auto u=st.begin()->second;
		if(u==dest)
			return;
		st.erase(st.begin());
		for(int i=0;i<graph[u].size();i++){
			int v = graph[u][i].first;
			if(dist[u]+graph[u][i].second<dist[v]){
				st.erase({dist[v],v});
				dist[v]=dist[u]+graph[u][i].second;
				st.insert({dist[v],v});
				par[v]=u;
			}
		}
	}
}

void path(int j){
	if(par[j]==-1)
	    return ;
	path(par[j]);
	cout<<j<<" ";
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a,b,w;
		cin>>a>>b>>w;
		graph[a].push_back(mp(b,w));
		graph[b].push_back(mp(a,w));
	}
	memset(dist,63,sizeof(dist));
	long long inf=dist[n];
	dijkstra(1,n);
	if(dist[n]==inf)
		cout<<"-1";
	else{
		cout<<"1 ";
		path(n);
	}
	cout<<"\n";
	return 0;
}