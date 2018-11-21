#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	if(n==1 && str=="0"){
		cout<<"No\n";
		return 0;
	} else if(n==2 && (str=="11" || str=="00")){
		cout<<"No\n";
		return 0;
	}
	if(str[0]=='0' && str[1]=='0'){
		cout<<"No\n";
		return 0;
	}
	for(int i=1;i<str.length()-1;i++){
		if(str[i]=='1' && str[i-1]=='0' && str[i+1]=='0') continue;
		else if(str[i]=='0'){
			if(str[i-1]=='0' && str[i+1]=='0'){
				cout<<"No\n";
				return 0;
			} else continue;
		} else{
			cout<<"No\n";
			return 0;
		}

	}
	if(str[str.length()-1]=='0' && str[str.length()-2]=='0'){
		cout<<"No\n";
		return 0;
	}
	cout<<"Yes\n";
	return 0;
}