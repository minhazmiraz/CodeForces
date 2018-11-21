#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin>>n>>k;
	if(k==1)
		cout<<n<<endl;
	else{
		long long i=0,tmp=n;
		while(tmp){
			i++;
			tmp=tmp/2;
		}
//		cout<<i<<endl;
		cout<<(1LL<<i)-1LL<<endl;
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/