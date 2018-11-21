#include <bits/stdc++.h>
using namespace std;
int matrix[105][105];
int main(){
	int n, m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		matrix[a][b]=c;
	}

	int ans=0;
	for(int i=1;i<=n;i++){
		int deya=0, neya=0;
		for(int j=1;j<=n;j++){
			deya+=matrix[i][j];
			neya+=matrix[j][i];
		}
		if((deya-neya)>0) ans+=(deya-neya);
	}
	cout<<ans<<endl;
	return 0;
}