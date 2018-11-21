#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	string str;
	cin>>str;
	int cnt=0;
	if(str[0]!='*'){
		if(a>=b) a--, str[0]='a';
		else b--, str[0]='b';
		cnt++;
	}

	for(int i=1;i<n;i++){
		if(a==0 && b==0) break;
		if((str[i-1]=='*' || str[i-1]=='.') && str[i]=='.'){
			if(a>=b) a--, str[i]='a';
			else b--, str[i]='b';
			cnt++;
		} else if(str[i]=='.'){
			if(str[i-1]=='a' && b>0) b--, str[i]='b', cnt++;
			else if(str[i-1]=='b' && a>0) a--, str[i]='a', cnt++;
		}
	}

	cout<<cnt<<endl;
	return 0;
}