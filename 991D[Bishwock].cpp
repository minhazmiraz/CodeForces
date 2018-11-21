#include <bits/stdc++.h>
using namespace std;
string str[5];
int main(){
	getline(cin, str[0]);
	getline(cin, str[1]);
	int cnt=0;
	//cout<<str[0]<<endl<<str[1]<<endl;
	if(str[0].length()<2){
		cout<<"0\n";
		return 0;
	}
	for(int i=0;i<str[0].length();){
		if(str[0].length()>=3 && str[0][i]=='0' && str[0][i+1]=='0' && str[0][i+2]=='0' &&
		 str[1][i]=='0' && str[1][i+1]=='0' && str[1][i+2]=='0'){
		 	cnt+=2;
		 	i+=3;
		} else if(str[0][i]=='0' && str[0][i+1]=='0' &&
		 str[1][i]=='0' && str[1][i+1]=='0'){
			cnt++; i+=2;
		} else if(str[0][i]=='0' && str[0][i+1]=='X' &&
		 str[1][i]=='0' && str[1][i+1]=='0'){
			cnt++; i+=2;
		}  else if(str[0][i]=='0' && str[0][i+1]=='0' &&
		 str[1][i]=='0' && str[1][i+1]=='X'){
			cnt++; i+=2;
		}  else if(str[0][i]=='0' && str[0][i+1]=='0' &&
		 str[1][i]=='X' && str[1][i+1]=='0'){
			cnt++; i+=2;
		}  else if(str[0][i]=='X' && str[0][i+1]=='0' &&
		 str[1][i]=='0' && str[1][i+1]=='0'){
			cnt++; i+=2;
		} else{
			i++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}