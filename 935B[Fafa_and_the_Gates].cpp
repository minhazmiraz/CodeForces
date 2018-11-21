#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,cnt=0;
	cin>>n;
	string str;
	cin>>str;
	int flag=0;
	int x=0,y=0;
	for(int i=0;i<(int)str.length();i++){
		if(str[i]=='U') y++;
		else if(str[i]=='R') x++;
		if(x>y){
			if(flag==2) cnt++;
			flag=1;
		} else if(x<y){
			if(flag==1) cnt++;
			flag=2;
		}
	}
	cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/