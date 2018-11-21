#include <bits/stdc++.h>
using namespace std;
map< long long, int > mp;
long long pos[1000];
vector< long long > vc, graph[1000];
int vis[1000];
void dfs(long long x){
	vis[x]=true;
	for(int i=0;i<graph[x].size();i++){
		if(!vis[graph[x][i]]){
			dfs(graph[x][i]);
			break;
		}
	}
	cout<<pos[x]<<" ";
}


int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		mp[a]=i;
		pos[i]=a;
		vc.push_back(a);
	}

	long long start;
	for(int i=0;i<vc.size();i++){
		int flag=0;
		if(vc[i]%3==0 && mp[vc[i]/3]){
			graph[mp[vc[i]/3]].push_back(mp[vc[i]]);
			flag=1;
			//cout<<vc[i]<<endl;
		}

		if(mp[vc[i]*2]){
			graph[mp[vc[i]*2]].push_back(mp[vc[i]]);
			flag=1;
			//cout<<vc[i]<<endl;
		}
		if(!flag) start=vc[i];
	}
	//cout<<start<<endl;
	memset(vis,0,sizeof vis);
	dfs(mp[start]);
	cout<<endl;
	return 0;
}