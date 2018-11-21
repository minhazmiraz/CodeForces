#include <bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2;
	cin>>str1>>str2;
	int i=1;
	while(str1[i]<str2[0]){
		i++;
	}
	cout<<str1.substr(0,i)+str2[0]<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/