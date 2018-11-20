#include <bits/stdc++.h>
using namespace std;
int vis[30];
int main(){
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		int tmp=s[i]-'A';
		vis[tmp]++;
	}
	int ans=INT_MAX;
	for(int i=0;i<k;i++){
		ans=min(ans, vis[i]);
	}
	cout<<k*ans<<endl;
	return 0;
}