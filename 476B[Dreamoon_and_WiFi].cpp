#include <bits/stdc++.h>
using namespace std;
string str1,str2;
int endpos=0;
double d[12][3];
double dp(int i, int cnt){
	if(i==str2.length()){
		if(cnt==endpos)
			return 1.0;
		return 0.0;
	}
	if(str2[i]=='+')
		return dp(i+1, cnt+1);
	else if(str2[i]=='-')
		return dp(i+1, cnt-1);
	else
		return (dp(i+1, cnt+1)+dp(i+1, cnt-1))/2.0;
}

int main(){
	cin>>str1>>str2;
	for(int i=0;i<str1.length();i++){
		if(str1[i]=='+')
			endpos++;
		else
			endpos--;
	}

	cout<<fixed<<setprecision(12)<<(double)dp(0,0)<<endl;
	return 0;
}