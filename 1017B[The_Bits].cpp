#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	long long cnt=0;
	int zero=0, one=0, zz=0, zo=0, oz=0, oo=0;
	for(int i=0;i<a.size();i++){

		if(a[i]=='0' && b[i]=='0') cnt+=one;
		if(a[i]=='0' && b[i]=='1') cnt+=oz;
		if(a[i]=='1' && b[i]=='0') cnt+=zero;
		if(a[i]=='1' && b[i]=='1') cnt+=zz;


		if(a[i]=='0') zero++;
		if(a[i]=='1') one++;
		if(a[i]=='0' && b[i]=='1') zo++;
		if(a[i]=='1' && b[i]=='0') oz++;
		if(a[i]=='0' && b[i]=='0') zz++;
		if(a[i]=='1' && b[i]=='1') oo++;
	}
	cout<<cnt<<endl;
	return 0;
}