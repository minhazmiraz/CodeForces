#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	int lo=0, hi=a.length()-1;
	while(lo<=hi){
		if(a[lo]==a[hi]){
			cout<<a[lo];
			lo++, hi--;
		} else{
			cout<<a[hi];
			hi--;
		}
	}
	for(int i=lo;i<a.length();i++)
		cout<<a[i];
	cout<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/