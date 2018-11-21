#include <bits/stdc++.h>
using namespace std;

int main(){
	int tcase;
	cin>>tcase;
	for(int kase=1;kase<=tcase;kase++){
		int n,k;
		cin>>n>>k;
		int vis[n+5];
		memset(vis,63,sizeof vis);
		for(int i=1;i<=k;i++){
			int a;
			cin>>a;
			for(int j=a;j<=n;j++)
				vis[j]=min(vis[j],j-a+1);
			for(int j=a;j>0;j--)
				vis[j]=min(vis[j],a-j+1);
		}

		int minn=0;
		for(int i=1;i<=n;i++) minn=max(minn,vis[i]);
		cout<<minn<<endl;
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/