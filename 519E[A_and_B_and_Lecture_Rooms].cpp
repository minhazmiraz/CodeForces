#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int n;
vector< int > graph[mx];
int par[mx],level[mx],table[mx][30], child[mx];
int dfs(int s, int from, int l){
	child[s]=1,level[s]=l; par[s]=from;
	for(int i=0;i<graph[s].size();i++){
		int to=graph[s][i];
		if(to==from) continue;
		child[s]+=dfs(to,s,l+1);
	}
	return child[s];
}

void sparseTable(){
	memset(par,-1,sizeof par);
	memset(level,0,sizeof level);
	memset(table,-1,sizeof table);
	memset(child,0,sizeof child);
	dfs(1,-1,0);
	for(int i=1;i<=n;i++)
		table[i][0]=par[i];

	for(int j=0;(1<<j)<n;j++){
		for(int i=1;i<=n;i++){
			if(table[i][j-1]!=-1)
				table[i][j]=table[table[i][j-1]][j-1];
		}
	}
}

int tnode1, tnode2;
int lcaQuery(int p, int q){
	if(level[p]<level[q])
		swap(p,q);
	int lvl=1;
	while(1){
		int next=lvl+1;
		if((1<<next)>level[p]) break;
		lvl++;
	}

	for(int i=lvl;i>=0;i--)
		if(level[p]-(1<<i)>=level[q])
			p=table[p][i];

	if(p==q) return p;

	for(int i=lvl;i>=0;i--)
		if(table[p][i]!=-1 && table[p][i]!=table[q][i])
			p=table[p][i], q=table[q][i];

	tnode1=p, tnode2=q;
	return par[p];
}


int findMidpoint(int u, int v, int d){
	d--;
	if(level[u]<level[v])
		swap(u,v);
	while(d){
		int lvl=1;
		while(1){
			if((1<<lvl)>d) break;
			lvl++;
		}
		lvl--;
		u=table[u][lvl];
		d-=(1<<lvl);
	}
	
	return u;
}

int main(){
	cin>>n;

	for(int i=1;i<n;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	sparseTable();

	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int u,v;
		cin>>u>>v;
		if(u==v){
			cout<<n<<endl;
			continue;
		}
		int lca=lcaQuery(u,v);
		int ans=level[u]+level[v]-(2*level[lca]);
		if(ans%2==0){
			int node1,node2,mnode;
			if(level[u]==level[v]){
				node1=tnode1;
				node2=tnode2;
				mnode=lca;
				cout<<n-child[node1]-child[node2]<<endl;
			} else{
				node1=findMidpoint(u,v,ans/2);
				mnode=par[node1];
				cout<<child[mnode]-child[node1]<<endl;
			}
			//cout<<child[node1]<<" "<<child[mnode]<<" "<<child[node2]<<endl;
		} else
			cout<<"0\n";
	}

	return 0;
}