#include <bits/stdc++.h>
using namespace std;

long long bigMOD(long long a, long long p){
	if(p==0) return 1LL;
	long long res=bigMOD(a,p/2);
	if(p%2) return (res*res*a);
	else return (res*res);
}

int main(){
	long long n,m;
	cin>>n>>m;
	if(n>=m || n>=60) cout<<m<<endl;
	else{
		cout<<m%bigMOD(2,n);
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/