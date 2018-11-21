#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	string str; cin>>str;
	int s=0,f=0;
	for(int i=1;i<str.length();i++){
		if(str[i-1]=='S' && str[i]=='F') s++;
		else if(str[i-1]=='F' && str[i]=='S') f++;
	}
	cout<<(f>=s?"NO\n":"YES\n");
	return 0;
}

/*
	Powered by Buggy plugin
*/