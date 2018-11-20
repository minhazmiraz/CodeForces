
#include <bits/stdc++.h>
using namespace std;


bool mark[105][105];
int main(){
	int n,d;
	cin>>n>>d;

	int lox=d, y=0, hix=d;
	bool lof=0, hif=0;
	while(1){
		for(int i=lox;i<=hix;i++){
			//cout<<i<<" "<<y<<endl;
			mark[i][y]=1;
		}
		if(y==n) break;

		if(lox==0) lof=1;
		if(hix==n) hif=1;

		if(!lof) lox--;
		else lox++;
		if(!hif) hix++;
		else hix--;

		y++;
	}

	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		if(mark[x][y]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}