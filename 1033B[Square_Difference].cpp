#include <bits/stdc++.h>
using namespace std;

vector< bool > bs;
void sieve(){
	bs.resize(10000005);
	bs[1]=1;
	for(long long i=2;i<=10000000;i+=2) bs[i]=1;
	for(long long i=3;i<=10000000;i+=2) if(!bs[i]) for(long long j=i*i;j<=10000000;j+=(i+i)) bs[j]=1;
}

bool check(long long n) {
	long long sqrtN=sqrt(n)+1;
	for(long long i=sqrtN;i>=2;i--){
		if(n%i==0) return 0;
	}

	return 1;
}


int main(){
	sieve();
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long a,b;
		cin>>a>>b;
		if((a-b)==1){
			if(a+b > 10000000) {
				if(check(a+b)) cout<<"YES\n";
				else  cout<<"NO\n";
			} else if(!bs[a+b]) cout<<"YES\n";
			else cout<<"NO\n";
		} else cout<<"NO\n";
	}
	return 0;
}