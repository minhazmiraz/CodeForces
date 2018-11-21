#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int cnt=0;
	for(int i=0;i<(int)str.length();i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
			str[i]=='1'||str[i]=='3'||str[i]=='5'||str[i]=='7'||str[i]=='9')
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/