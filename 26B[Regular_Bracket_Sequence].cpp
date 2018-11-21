#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int ans=str.length(), sum=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='(') sum++;
		else sum--;
		if(sum<0) ans--, sum=0;
	}
	ans-=sum;
	cout<<ans<<endl;
	return 0;
}