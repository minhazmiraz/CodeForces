#include <bits/stdc++.h>
using namespace std;

int main(){
	string s(1005,'o');
	int fib[1005];
	fib[1]=1, fib[2]=1;
	for(int i=3;i<=1000;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	int n;
	cin>>n;
	int p=1;
	while(fib[p]<=n) s[fib[p]-1]='O', p++;
	for(int i=0;i<n;i++) cout<<s[i];
	return 0;
}

/*
	Powered by Buggy plugin
*/