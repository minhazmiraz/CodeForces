#include <bits/stdc++.h>
using namespace std;

string str[105];
queue< pair< int, int > > q;
bool vis[105][105], cvis[130];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
int main(){
	int n,m;
	char pre;
	cin>>n>>m>>pre;
	for(int i=0;i<n;i++){
		cin>>str[i];
		for(int j=0;j<str[i].length();j++){
			if(str[i][j]==pre){
				q.push({i,j});
				vis[i][j]=1;
				cvis[str[i][j]]=1;
			}
		}
	}

	int cnt=0;
	while(!q.empty()){
		int ux=q.front().first;
		int uy=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int vx=ux+dx[i];
			int vy=uy+dy[i];
			if(vx>=0 && vx<n && vy>=0 && vy<m && !vis[vx][vy]
				&& str[vx][vy]!='.' && !cvis[str[vx][vy]]){
				vis[vx][vy]=1;
				cvis[str[vx][vy]]=1;
				cnt++;
			}
		}
	}

	cout<<cnt<<endl;
	return 0;
}