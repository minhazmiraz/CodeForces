#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long s,a,b,c;
		cin>>s>>a>>b>>c;
		long long tmp=s/c;
		long long koita = (tmp/a);
		long long ans = (koita*a)+(koita*b);
		ans += (tmp-(koita*a));
		cout<<ans<<endl;
	}
	return 0;
}