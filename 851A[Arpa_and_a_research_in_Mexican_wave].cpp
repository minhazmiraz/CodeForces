#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,k,t;
	scanf("%lld%lld%lld",&n,&k,&t);
	if(t<=k) cout<<t<<endl;
	else if(t<=n) cout<<k<<endl;
	else cout<<k-(t-n)<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/