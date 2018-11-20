#include <bits/stdc++.h>
using namespace std;

string a="", b="";

int main(){
	int n,m;
	cin>>n>>m;
	int tmp=(1129/4);
	for(int i=1;i<=tmp;i++){
		a+='5';
		b+='4';
	}
	a+='5'; b+='5';
	cout<<a<<"\n"<<b<<endl;
	return 0;
}