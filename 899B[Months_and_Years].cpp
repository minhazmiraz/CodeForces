#include <bits/stdc++.h>
using namespace std;

int main(){
	string 
	str= "414343443434";
	str+="414343443434";
	str+="424343443434";
	str+="414343443434";
	str+="414343443434";
	int n;
	string inp="";
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a==28)
			inp+="1";
		else if(a==29)
			inp+="2";
		else if(a==30)
			inp+="3";
		else
			inp+="4";
	}

	for(int i=0;i<(int)(str.length()-n);i++){
		if(str.substr(i,n)==inp){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/