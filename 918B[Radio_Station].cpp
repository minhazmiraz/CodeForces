#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	map < string, string > mp;
	for(int i=1;i<=n;i++){
		string name, ip;
		cin>>name>>ip;
		mp[ip]=name;
	}
	for(int i=1;i<=m;i++){
		string com, ip;
		cin>>com>>ip;
		ip.pop_back();
		cout<<com<<" "<<ip<<"; #"<<mp[ip]<<endl;
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/