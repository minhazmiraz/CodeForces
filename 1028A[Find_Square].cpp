#include <bits/stdc++.h>
using namespace std;
string str[200];
int main(){
	int n,m;
	cin>>n>>m;
	bool flag=0;
	int sx,sy,dx,dy;
	for(int i=0;i<n;i++){
		cin>>str[i];
		if(!flag){
			for(int j=0;j<m;j++){
				if(str[i][j]=='B'){
					sx=i, sy=j;
					dx=sx, dy=sy;
					flag=1;
					break;
				}
			}
		} else{
			if(str[i][sy]=='B'){
				dx=i, dy=sy;
			}
		}
	}

	int tmp=(dx-sx)/2;
	cout<<sx+tmp+1<<" "<<sy+tmp+1<<endl;
	return 0;
}