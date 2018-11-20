#include <bits/stdc++.h>
using namespace std;
map< string, int > mp;
map< string, string > ans;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		for(int j=0;j<s.length();j++){
			string tmp="";
			for(int k=j;k<s.length();k++){
				tmp+=s[k];
				if(ans[tmp]!=s) mp[tmp]++;
				ans[tmp]=s;
			}
		}
	}

	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		string s;
		cin>>s;
		cout<<mp[s]<<" ";
		if(mp[s]) cout<<ans[s]<<endl;
		else cout<<"-\n";
	}
	return 0;
}