#include<bits/stdc++.h>

using namespace std;

string str;
int main(){
	cin>>str;
	if(str.length()<26){
		cout<<"-1\n";
	} else{
		char ch = 'a';
		bool flag=0;
		string tmp="";
		for(int i=0;i<str.length();i++){
			if(flag){
				tmp+=str[i];
				continue;
			}

			if(str[i]<=ch){
				tmp+=ch;
				if(ch=='z')
					flag=1;
				ch++;
			} else{
				tmp+=str[i];
			}
		}
		if(flag)
			cout<<tmp<<endl;
		else
			cout<<"-1\n";
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/