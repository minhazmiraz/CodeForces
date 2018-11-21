#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string str;
	cin>>n>>str;
	int flag=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='1') flag=1;
	}
	if(flag) cout<<"1";
	for(int i=0;i<str.length();i++){
		if(str[i]=='0') cout<<"0";
	}
	cout<<endl;
	return 0;
}