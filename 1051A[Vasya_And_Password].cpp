#include <bits/stdc++.h>
using namespace std;
int main(){
	int tcase;
	cin>>tcase;
	while(tcase--){
		string s;
		cin>>s;
		int lo=0, hi=0, num=0;
		for(int i=0;i<s.length();i++){
			if(s[i]>='a' && s[i]<='z') lo++;
			if(s[i]>='A' && s[i]<='Z') hi++;
			if(s[i]>='0' && s[i]<='9') num++;
		}

		if(lo==0 && hi && num){
			for(int i=0;i<s.length();i++){
				if(hi>=num && s[i]>='A' && s[i]<='Z'){
					s[i]='a';
					break;
				} else if(hi<num && s[i]>='0' && s[i]<='9'){
					s[i]='a';
					break;
				}
			}
			cout<<s<<endl;
		} else if(hi==0 && lo && num){
			for(int i=0;i<s.length();i++){
				if(lo>=num && s[i]>='a' && s[i]<='z'){
					s[i]='A';
					break;
				} else if(lo<num && s[i]>='0' && s[i]<='9'){
					s[i]='A';
					break;
				}
			}
			cout<<s<<endl;
		} else if(num==0 && hi && lo){
			for(int i=0;i<s.length();i++){
				if(hi>=lo && s[i]>='A' && s[i]<='Z'){
					s[i]='4';
					break;
				} else if(hi<lo && s[i]>='a' && s[i]<='z'){
					s[i]='4';
					break;
				}
			}
			cout<<s<<endl;
		} else if(lo==0 && hi==0){
			s[0]='a'; s[1]='A';
			cout<<s<<endl;
		} else if(lo==0 && num==0){
			s[0]='a'; s[1]='4';
			cout<<s<<endl;
		} else if(num==0 && hi==0){
			s[0]='4'; s[1]='A';
			cout<<s<<endl;
		} else{
			cout<<s<<endl;
		}
	}
	return 0;
}