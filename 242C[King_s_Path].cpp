#include <bits/stdc++.h>
using namespace std;
map< pair< int, int >, bool > matrix, vis;
map< pair< int, int >, int > dist;
int dx[]={-1,-1,-1,0,1,1,1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};
int destx, desty;

int bfs(int sx, int sy){
	vis[{sx,sy}]=1;
	dist[{sx,sy}]=0;
	queue< pair< int, int > > q;
	q.push({sx,sy});
	while(!q.empty()){
		int ux=q.front().first;
		int uy=q.front().second;
		q.pop();
		for(int i=0;i<8;i++){
			int vx=ux+dx[i];
			int vy=uy+dy[i];
			if(vx==destx && vy==desty) return dist[{ux,uy}]+1;
			if(matrix[{vx,vy}] && !vis[{vx,vy}]){
				vis[{vx,vy}]=1;
				dist[{vx,vy}]=dist[{ux,uy}]+1;
				q.push({vx,vy});
			}
		}
	}
	return -1;
}


int main(){
	int sx, sy;
	cin>>sx>>sy>>destx>>desty;

	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int row;
		cin>>row;
		int u,v;
		cin>>u>>v;
		for(int j=u; j<=v; j++){
			matrix[{row,j}]=1;
		}
	}
	cout<<bfs(sx,sy)<<endl;
	return 0;
}