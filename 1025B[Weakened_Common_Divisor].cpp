#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define SET(x,n) (x[n>>6]|=(1<<((n>>1)&31)))
#define GET(x,n) (x[n>>6]&(1<<((n>>1)&31)))

vector< LL > prime;

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

set< LL > factor;
void prime_fact(LL n){
    LL sqrtN = (LL)sqrt((double)n);
    for(LL i=0;i<prime.size()&&prime[i]<=sqrtN;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                factor.insert(prime[i]);
            }
            sqrtN = (LL)sqrt((double)n);
        }
    }
    if(n!=1)
        factor.insert(n);
}


int main(){
	sieve(1000000);
	int n;
	cin>>n;
	long long a,b;
	vector< pair< LL, LL > > vc;
	cin>>a>>b;
	prime_fact(a);
	prime_fact(b);
	for(int i=2;i<=n;i++){
		cin>>a>>b;
		vc.push_back({a,b});
	}

	for(auto p:factor){
		bool f=1;
		for(int i=0;i<vc.size();i++){
			if(vc[i].first%p==0 || vc[i].second%p==0) continue;
			else{
				f=0;
				break;
			}
		}
		if(f){
			cout<<p<<"\n";
			return 0;
		}
	}
	cout<<"-1\n";

	return 0;
}