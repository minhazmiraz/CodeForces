#include <bits/stdc++.h>
using namespace std;
vector< pair< int,int > > graph;
queue< int > que[2];
int lvl[400005], degree[400005];
int main(){
	int n,d,k;
	cin>>n>>d>>k;
	int parent=1, child=2, depth=1;

	if(d>1 && k==1){
		cout<<"NO\n";
		return 0;
	}

	int tmpDpth = ceil(d/2.0), flag=0;
	for(int i=1;i<=d;i++){
		if(child>n){
			cout<<"NO\n";
			return 0;
		}
		graph.push_back({parent, child});
		degree[parent]++, degree[child]++;
		if(i!=d){
			if(tmpDpth==1) flag=!flag;
			que[flag].push(child);
			lvl[child]=abs(--tmpDpth);
		}
		parent=child;
		child++;
	}

	int maxDepth=ceil(d/2.0);
	while(!que[0].empty()){
		parent=que[0].front();
		que[0].pop();
		if(lvl[parent]+1>maxDepth) continue;
		if(child>n) break;
		int mi = degree[parent];
		for(int i=1;i<=k-mi;i++){
			if(child>n) break;
			graph.push_back({parent, child});
			degree[parent]++, degree[child]++;
			que[0].push(child);
			lvl[child]=lvl[parent]+1;
			child++;
		}
	}

	maxDepth=d/2;
	while(!que[1].empty()){
		parent=que[1].front();
		que[1].pop();
		if(lvl[parent]+1>maxDepth) continue;
		if(child>n) break;
		int mi = degree[parent];
		for(int i=1;i<=k-mi;i++){
			if(child>n) break;
			graph.push_back({parent, child});
			degree[parent]++, degree[child]++;
			que[1].push(child);
			lvl[child]=lvl[parent]+1;
			child++;
		}
	}
	if(child<=n) cout<<"NO\n";
	else{
		cout<<"YES\n";
		for(int i=0;i<graph.size();i++){
			cout<<graph[i].first<<" "<<graph[i].second<<endl;
		}
	}
	return 0;
}