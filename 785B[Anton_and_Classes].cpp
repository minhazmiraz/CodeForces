#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,maxxa=0,minna=10e10,maxxb=0,minnb=10e10;
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long a,b;
		cin>>a>>b;
		maxxa=max(maxxa,a);
		minna=min(minna,b);
	}
	long long m;
	cin>>m;
	for(long long i=1;i<=m;i++){
		long long a,b;
		cin>>a>>b;
		maxxb=max(maxxb,a);
		minnb=min(minnb,b);
	}
	long long maxx = max(maxxa-minnb,maxxb-minna);
	if(maxx<0)
		cout<<"0\n";
	else
		cout<<maxx<<"\n";
	return 0;
}