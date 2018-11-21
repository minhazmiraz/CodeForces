#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define SET(x,n) (x[n>>6]|=(1<<((n>>1)&31)))
#define GET(x,n) (x[n>>6]&(1<<((n>>1)&31)))

vector< int > prime;

void sieve(LL n){
    LL sz = (n>>6)+5;
    LL status[sz];
    memset(status,0,sizeof status);
    LL sqrtN = (LL)sqrt((double)n);
    for(LL i=3;i<=sqrtN;i+=2){
        if(!GET(status,i)){
            for(LL j=i*i;j<=n;j+=(i+i)){
                SET(status,j);
            }
        }
    }
    
    prime.push_back(2);
    for(LL i=3;i<=n;i+=2){
        if(!GET(status,i)){
        	prime.push_back(i);
        }
    }
}



int main(){
	sieve(1000);
	int n;
	cin>>n;
	if(n==3){
		cout<<"1 2\n";
		return 0;
	} else if(n==4){
		cout<<"1 3\n";
		return 0;
	} else{
		for(int i=ceil(n/2.0);i<n;i++){
			if(n-i!=i && __gcd(n-i,i)==1){
				cout<<n-i<<" "<<i<<endl;
				return 0;
			}
		}
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/