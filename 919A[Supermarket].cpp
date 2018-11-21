#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	double minn=10e8;
	for(int i=1;i<=n;i++){
		double a,b;
		cin>>a>>b;
		if(minn-(a/b)>=0) minn=a/b;
	}
	cout<<setprecision(8)<<fixed<<minn*m<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/