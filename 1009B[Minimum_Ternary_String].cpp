#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int one=0, zero=0, two=0;
	for(int i=0;i<str.length();i++){
		if(!two && str[i]=='0') zero++;
		else if(str[i]=='1') one++;
		else two++;
	}
	bool f1=0, f2=0;
	for(int i=0;i<str.length();i++){
		if((!f1 || f2) && str[i]=='0'){
			cout<<str[i];
			zero--;
		} else if(!f2 && str[i]=='1'){
			while(zero){
				cout<<"0";
				zero--;
			}
			cout<<"1";
			one--;
			f1=1;
		} else if(str[i]=='2'){
			while(one){
				cout<<"1";
				one--;
			}
			cout<<"2";
			two--;
			f2=1;
		}
	}
	cout<<endl;
	return 0;
}