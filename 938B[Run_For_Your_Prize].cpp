#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

	int minn[100005],maxx=0;
	memset(minn,63,sizeof minn);

	for(int i=1;i<=n;i++){
		minn[i]=min(minn[i],a[i]-1);
		//maxx=max(maxx,minn[i]);
	}
	for(int i=n;i>=1;i--){
		minn[i]=min(minn[i],1000000-a[i]);
		maxx=max(maxx,minn[i]);
	}

	cout<<maxx<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/