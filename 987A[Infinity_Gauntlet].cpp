#include <bits/stdc++.h>
using namespace std;
map< string, string > val;
map< string, bool > mp;
int main(){
	string s[]={"purple", "green", "blue", "orange", "red", "yellow"};
	val["purple"]="Power", val["green"]="Time", val["blue"]="Space", 
	val["orange"]="Soul", val["red"]="Reality", val["yellow"]="Mind";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string str;
		cin>>str;
		mp[str]=1;
	}

	int cnt=0;
	vector< string > vc;
	for(int i=0;i<6;i++){
		if(!mp[s[i]]){
			cnt++;
			vc.push_back(val[s[i]]);
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<vc.size();i++) cout<<vc[i]<<endl;
	return 0;
}