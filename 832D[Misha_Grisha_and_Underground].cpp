#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int n,q, par[mx], level[mx], table[mx][30];
vector< int > graph[mx];


void dfs(int s, int from, int l){
	par[s]=from; level[s]=l;
	for(int i=0;i<graph[s].size();i++){
		int to=graph[s][i];
		if(to==from) continue;
		dfs(to,s,l+1);
	}
}


void sparseTable(){
	dfs(1,-1,0);
	memset(table,-1,sizeof table);
	for(int i=1;i<=n;i++)
		table[i][0]=par[i];
	for(int j=1;(1<<j)<n;j++)
		for(int i=1;i<=n;i++)
			if(table[i][j-1]!=-1)
				table[i][j]=table[table[i][j-1]][j-1];
}

int lcaQuery(int p, int q){
	if(level[p]<level[q]) swap(p,q);
	for(int i=21;i>=0;i--)
		if(level[p]-(1<<i)>=level[q])
			p=table[p][i];
	if(p==q) return p;
	for(int i=21;i>=0;i--)
		if(table[p][i]!=-1 && table[p][i]!=table[q][i])
			p=table[p][i], q=table[q][i];
	return par[p];
}

int dist(int p, int q, int s, int r){
	if(level[p]<level[q]) swap(p,q);
	return (level[r]-level[p]+1)+(q==s?0:level[s]-level[q]);
}

int main(){
		//cout<<"Hello\n";
	cin>>n>>q;
	for(int i=2;i<=n;i++){
		int a;
		cin>>a;
		graph[i].push_back(a);
		graph[a].push_back(i);
	}

	sparseTable();

	for(int i=1;i<=q;i++){
		int a,b,c;
		cin>>a>>b>>c;
		int lcA=lcaQuery(a,b);
		int lcB=lcaQuery(b,c);
		int lcC=lcaQuery(c,a);

		int ans=0;
		ans=max(ans,dist(lcA,lcB,lcC,b));
		ans=max(ans,dist(lcA,lcC,lcB,a));
		ans=max(ans,dist(lcC,lcB,lcA,c));
		cout<<ans<<endl;
	}
	return 0;
}