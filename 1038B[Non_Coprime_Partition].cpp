#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=2) return cout<<"No\n", 0;

	cout<<"Yes\n";
	cout<<ceil(n/2.0)<<" ";
	for(int i=1;i<=n;i+=2) cout<<i<<" ";
	cout<<endl;

	cout<<n/2<<" ";
	for(int i=2;i<=n;i+=2) cout<<i<<" ";
	cout<<endl;
	return 0;
}