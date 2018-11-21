#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	if(a>n || b>n || c>n || c>a || c>b) return cout<<"-1\n", 0;
	int sum = a+b-c;
	if((n-sum)>=1) cout<<n-sum<<endl;
	else cout<<"-1\n";
	return 0;
}