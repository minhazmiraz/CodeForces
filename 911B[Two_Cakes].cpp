#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int maxx=0;
	for(int i=1;i<n;i++){
		int minn=1e8;
		minn=min(a/i,b/(n-i));
		maxx=max(maxx,minn);
	}
	cout<<maxx<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/