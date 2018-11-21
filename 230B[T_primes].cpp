#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
#define mx 20000000

bool mark[mx];
void calc(){
	int sqrtN=sqrt(mx);
	int N=sqrt(1000000000000LL);
	for(int i=3;i<=sqrtN;i+=2){
		if(!mark[i]){
			for(int j=i*i;j<=N+10;j+=(i+i)){
				mark[j]=1;
			}
		}
	}
}



int main() {
    //ios_base::sync_with_stdio(0);
    calc();
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a,divi=0;
		cin>>a;
		long long sqrtA=ceil(sqrt(a));
		if(sqrtA==2 || (a!=1 && sqrtA%2!=0)){
			if(sqrtA*sqrtA==a && !mark[sqrtA]){
				divi=3;
			}
		}
		if(divi==3)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

    return 0;
}
