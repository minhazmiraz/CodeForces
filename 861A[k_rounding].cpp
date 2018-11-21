#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	int k;
	scanf("%lld %d",&n,&k);
	long long ep=1;
	for(int i=1;i<=k;i++) ep*=10;
	cout<<(n*ep)/__gcd(n,ep)<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/