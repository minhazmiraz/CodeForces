#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

bool mark[100];
void sieve(){
	memset(mark,0,sizeof mark);
	for(int i=2;i<=55;i++){
		if(!mark[i]){
			for(int j=i+i;j<=60;j+=i){
				mark[j]=1;
			}
		}
	}
}


int main() {
    //ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	sieve();
	if(mark[m]){
		cout<<"NO\n";
		return 0;
	}
	for(int i=n+1;i<m;i++){
		if(!mark[i]){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
    return 0;
}
