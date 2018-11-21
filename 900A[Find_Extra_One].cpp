#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,neg=0,pos=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		if(a<0)
			neg++;
		if(a>0)
			pos++;
	}

	if(neg<=1 || pos<=1)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/