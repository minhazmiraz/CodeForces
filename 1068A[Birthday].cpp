#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,k,l;
	cin>>n>>m>>k>>l;
	long long t = ceil((k+l+.0)/m);
	if((t*m)<=n) cout<<t<<endl;
	else cout<<"-1\n";
	return 0;
}