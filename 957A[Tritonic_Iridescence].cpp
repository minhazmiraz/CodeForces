#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int flag=0;
	if(str[0]=='?' || str[str.length()-1]=='?') flag=1;
	for(int i=1;i<str.length();i++){
		if(str[i]==str[i-1] && str[i]!='?'){
			cout<<"NO\n";
			return 0;
		}
	}

	for(int i=0;i<str.length();i++){
		if(str[i]=='?' && str[i+1]=='?'){
			flag=1;
		} else if(str[i]!='?' && str[i+1]=='?' && str[i+2]!='?' && str[i]==str[i+2]){
			flag=1;
		}
	}

	if(flag)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/