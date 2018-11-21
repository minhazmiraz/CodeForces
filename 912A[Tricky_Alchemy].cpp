#include <bits/stdc++.h>
using namespace std;

int main(){
	long long A,B;
	cin>>A>>B;
	long long x,y,z;
	cin>>x>>y>>z;
	long long yellow=(2*x)+y;
	long long blue=y+(3*z);
	long long req=0;
	if(A<yellow) req=yellow-A;
	if(B<blue) req+=blue-B;
	cout<<req<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/