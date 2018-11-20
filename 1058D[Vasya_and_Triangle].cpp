#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n, m,k;
	cin>>n>>m>>k;
	if((2*n*m)%k!=0){
		cout<<"NO\n";
		return 0;
	}

	long long val=(2*n*m)/k;
	long long sqrtV=sqrt(val)+1;
	
	for(int i=min(sqrtV, min(n,m));i>=1;i--){
		if(val%i==0){
			//cout<<i<<endl;
			long long tmp=val/i;
			if((tmp<=m && i<=n)){
				cout<<"YES\n";
				cout<<"0 0\n";
				cout<<"0 "<<tmp<<"\n";
				cout<<i<<" 0\n";
				return 0;
			} else if(tmp<=n && i<=m){
				cout<<"YES\n";
				cout<<"0 0\n";
				cout<<"0 "<<i<<"\n";
				cout<<tmp<<" 0\n";
				return 0;
			}
		}
	}

	return 0;
}