#include <bits/stdc++.h>
using namespace std;
int main(){
	string str, ans="";
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]=='.')
			ans+='0';
		else if(str[i]=='-' && str[i+1]=='.'){
			ans+='1';
			i++;
		} else if(str[i]=='-' && str[i+1]=='-'){
			i++;
			ans+='2';
		}
	}
	cout<<ans<<endl;
}