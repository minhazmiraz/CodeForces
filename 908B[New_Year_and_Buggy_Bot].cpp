#include <bits/stdc++.h>
using namespace std;
string maze[55],str;
int n,m;
int arr[]={0,1,2,3};
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
bool call(int sx, int sy, int i){
	//cout<<sx<<" "<<sy<<" "<<i<<endl;
	if(sx>=n || sx<0 || sy<0 || sy>=m) return 0;
	if(maze[sx][sy]=='#') return 0;

	//cout<<"Hello\n";
	if(maze[sx][sy]=='E') return 1;
	if(i>=(int)str.length()) return 0;
	int x=str[i]-'0';
	return call(sx+dx[arr[x]],sy+dy[arr[x]],i+1);
}


int main(){
	cin>>n>>m;
	int f=0,sx,sy;
	for(int i=0;i<n;i++){
		cin>>maze[i];
		for(int j=0;!f && j<(int)maze[i].length();j++)
			if(maze[i][j]=='S'){
				f=1;
				sx=i,sy=j;
				break;
			}
	}
	cin>>str;
	int cnt=0;
	do{
		//cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;
		if(call(sx,sy,0))
			cnt++;
	} while(next_permutation(arr,arr+4));
	cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/