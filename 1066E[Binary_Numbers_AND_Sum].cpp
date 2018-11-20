#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353

long long coun[200005];
int main(){
	int n, m;
	cin>>n>>m;
	string sn, sm;
	cin>>sn>>sm;
	while(n<m){
		sn='0'+sn;
		n++;
	}

	while(m<n){
		sm='0'+sm;
		m++;
	}

	int cnt=0;
	for(int i=0;i<m;i++){
		if(sm[i]=='1') cnt++;
		coun[i]=cnt;
	}

	long long ans=0, mul=1;
	for(int i=n-1;i>=0;i--){
		if(sn[i]=='1') ans=(MOD+ans+(mul*coun[i])%MOD)%MOD;
		mul=(mul*2LL)%MOD;
	}
	cout<<ans<<endl;
	return 0;
}