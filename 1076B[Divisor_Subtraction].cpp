#include <bits/stdc++.h>
using namespace std;


long long factor(long long n){
	if(n%2LL==0) return 2LL;
	long long tmp=sqrt(n)+1;
	for(long long a=3;a<=tmp;a+=2){
		if(n%a==0) return a;
	}
	return n;
}

int main(){
	//sieve();
	long long n;
	cin>>n;
	long long d=factor(n);
	n-=d;
	if(n){
		d=factor(n);
	}
	//cout<<d<<endl;
	cout<<(n/d)+1<<endl;
	return 0;
}