#include <bits/stdc++.h>
using namespace std;

long long font[3005], cost[3005], minn[3005], maxx[3005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>font[i];
	}

	for(int i=1;i<=n;i++){
		cin>>cost[i];
	}


	memset(minn,-1,sizeof minn);
	memset(maxx,-1,sizeof maxx);
	for(int i=1;i<=n;i++){
		long long mi=1e18 + 5;
		for(int j=1;j<i;j++){
			if(font[i]>font[j]) mi=min(mi, cost[j]);
		}
		if(mi!=1e18+5) minn[i]=mi;

		long long mx=1e18 + 5;
		for(int j=i+1;j<=n;j++){
			if(font[i]<font[j]) mx=min(mx, cost[j]);
		}
		if(mx!=1e18+5) maxx[i]=mx;
	}

	long long mi=(1e18*4);
	for(int i=1;i<=n;i++){
		if(minn[i]==-1 || maxx[i]==-1) continue;
		//cout<<minn[i]<<" "<<i<<" "<<maxx[i]<<endl;
		mi=min(mi,minn[i]+cost[i]+maxx[i]);
	}
	if(mi==(1e18*4))  return cout<<"-1\n", 0;
	cout<<mi<<endl;
	return 0;
}