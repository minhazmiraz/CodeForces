#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str,ans;
	cin>>str;
	map< string , int > mp;
	int mx=0;
	for(int i=0;i<str.length()-1;i++){
		string tmp=str.substr(i,2);
		mp[tmp]++;
		if(mp[tmp]>mx){
			mx=mp[tmp];
			ans=tmp;
		}
	}
	cout<<ans<<endl;
	return 0;
}