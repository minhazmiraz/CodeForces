#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin>>n>>k;
	if(n==k || k==0){
		cout<<"0 0\n";
		return 0;
	} else{
		cout<<"1 ";
		if((n-k) >= k*2)
			cout<<k*2<<endl;
		else
			cout<<n-k<<endl;
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/