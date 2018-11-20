#include <bits/stdc++.h>
using namespace std;

vector< long long > vc;
int main(){
	long long n, m;
	cin>>n>>m;
	long long suma=0, sumb=0;
	
	for(int i=1;i<=n;i++){
		long long a,b;
		cin>>a>>b;
		vc.push_back(a-b);
		suma+=a; sumb+=b;
	}
	if(sumb>m) return cout<<"-1\n", 0;
	if(suma<=m) return cout<<"0\n", 0;
	sort(vc.begin(), vc.end());
	long long cnt=0;
	for(int i=vc.size()-1;i>=0;i--){
		if(suma>m){
			cnt++;
			suma-=vc[i];
		} else break;
	}
	cout<<cnt<<endl;
	return 0;
}