#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str, ans="";
	cin>>str;
	if(n%2){
		for(int i=0;i<str.length();i++){
			if(i%2==0) ans+=str[i];
			else ans=str[i]+ans;
		}
	} else{
		for(int i=0;i<str.length();i++){
			if(i%2) ans+=str[i];
			else ans=str[i]+ans;
		}
	}
	cout<<ans<<endl;
	return 0;
}