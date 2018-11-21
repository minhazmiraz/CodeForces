#include <bits/stdc++.h>
using namespace std;

long long mult[1000005];
int cnt[15][1000005];
int main(){
	for(int i=1;i<=9;i++){
		for(int j=i;j<=9;j++)
			cnt[i][j]=1;

	}
	for(int i=1;i<1000005;i++){
		if(i<=9){
			mult[i]=i;
			continue;
		}
		int tmp=i,m=1;
		while(tmp){
			if(tmp%10==0){
				tmp/=10;
				continue;
			}
			m*=(tmp%10);
			tmp/=10;
		}
		mult[i]=mult[m];
		for(int j=1;j<=9;j++){
			if(j==mult[i])
				cnt[j][i]=cnt[j][i-1]+1;
			else
				cnt[j][i]=cnt[j][i-1];

		}
	}

	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int l,r,k;
		cin>>l>>r>>k;
		cout<<cnt[k][r]-cnt[k][l-1]<<endl;
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/