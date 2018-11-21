#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int vis[5];
	memset(vis,0,sizeof vis);
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		vis[a]++;
	}
	int cnt=0;
	if(vis[2]>=vis[1]){
		cnt+=vis[1];
	} else{
		cnt+=vis[2];
		vis[1]-=vis[2];
		cnt+=(vis[1]/3);
	}

	cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/