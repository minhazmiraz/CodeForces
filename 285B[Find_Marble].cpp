#include <bits/stdc++.h>
using namespace std;


int graph[100005];
bool vis[100005];
int path(int s, int t){
	if(s==t){
		return 0;
	}
	if(!vis[s]){
		vis[s]=1;
		return 1+path(graph[s], t);
	} else{
		return (-1*INT_MAX);
	}
}


int main(){
	int n,s,t;
	cin>>n>>s>>t;
	for(int i=1;i<=n;i++){
		cin>>graph[i];
	}
	if(s==t) cout<<"0"<<endl;
	else{
		int ans=path(s,t);
		if(ans>0) cout<<ans<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}