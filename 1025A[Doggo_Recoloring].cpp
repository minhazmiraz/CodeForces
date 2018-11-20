#include <bits/stdc++.h>
using namespace std;
int vis[30];
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	if(n==1){
		cout<<"Yes\n";
		return 0;
	}
	int flag=0;
	for(int i=0;i<str.length();i++){
		int tmp=str[i]-'a';
		vis[tmp]++;
		if(vis[tmp]>=2) flag=1;
	}
	if(flag) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}