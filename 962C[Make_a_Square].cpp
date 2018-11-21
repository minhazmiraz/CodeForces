#include <bits/stdc++.h>
using namespace std;

long long makeDigit(string str){
	long long num=0;
	bool flag=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='*') continue;
		if(!flag && str[i]=='0') break;
		num=(str[i]-'0')+(num*10);
		flag=1;
	}

	return num;
}

int ans;

void dp(int i, string str, int cnt){
	if(i>=str.length()){
		long long num=makeDigit(str);
		//cout<<str<<num<<cnt<<endl;
		if(num==0) return;
		long long sqrtN = sqrt(num);
		if(sqrtN*sqrtN == num) ans=min(ans,cnt);
		return;
	}

	dp(i+1,str,cnt);
	str[i]='*';
	dp(i+1,str,cnt+1);
}

int main(){
	string str;
	cin>>str;
	ans=INT_MAX;
	dp(0,str,0);
	if(ans!=INT_MAX) cout<<ans<<endl;
	else cout<<"-1\n";
}