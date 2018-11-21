#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	string str;
	cin>>str;
	for(int i=1;i<=m;i++){
		int l,r;
		char c1,c2;
		cin>>l>>r>>c1>>c2;
		for(int j=l-1;j<r;j++)
			if(str[j]==c1)
				str[j]=c2;
	}

	cout<<str<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/