#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,s,p;
	cin>>k>>n>>s>>p;
	double paper = ceil(n/(s+0.0));
	cout<<(int)ceil((paper*k)/p)<<endl;
	return 0;
}