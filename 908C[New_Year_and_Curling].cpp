#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,r;
	cin>>n>>r;
	double ans[1005];
	bool vis[1005];
	double inp[1005];
	memset(vis,0,sizeof vis);
	for(int i=1;i<=n;i++){
		cin>>inp[i];
	}

	for(int i=1;i<=n;i++){
		ans[i]=r;
		for(int j=1;j<i;j++){
			if((inp[i]-inp[j])*(inp[i]-inp[j]) > (r+r)*(r+r)) continue;
			double temp=((r+r)*(r+r))-((inp[i]-inp[j])*(inp[i]-inp[j]));
			ans[i]=max(ans[i],sqrt(temp)+ans[j]);
		}
		printf("%.11lf ",ans[i]);
	}
	cout<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/