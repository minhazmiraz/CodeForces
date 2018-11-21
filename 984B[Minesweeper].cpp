#include <bits/stdc++.h>
using namespace std;
string field[105];

int dx[]={-1, 1, 0, 0, -1, 1, -1, 1};
int dy[]={0, 0, 1, -1, -1, 1, 1, -1};

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>field[i];
	}

/*	if(n==1 && m==1 && field[0][0]=='*'){
		cout<<"NO\n";
		return 0;
	}*/

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int cnt=0;
			if(field[i][j]!='*'){
				for(int k=0;k<8;k++){
					if((i+dx[k])>=0 && (i+dx[k])<n &&
						(j+dy[k])>=0 && (j+dy[k])<m){
						if(field[i+dx[k]][j+dy[k]]=='*') cnt++;
					}
				}
				if(field[i][j]=='.'){
					if(cnt!=0){
						cout<<"NO\n";
						return 0;
					}
				} else{
					int num=field[i][j]-'0';
					if(cnt!=num){
						cout<<"NO\n";
						return 0;
					}
				}
			}
		}
	}
	cout<<"YES\n";
	return 0;
}