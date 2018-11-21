#include <bits/stdc++.h>
using namespace std;
int dp[105][105];
int main(){
	string str;
	cin>>str;
	int len=str.length();
	for(int i=0;i<str.length();i++){
		if(str[i]=='0' || str[i]=='8'){
			cout<<"YES\n"<<str[i]<<endl;
			return 0;
		}
		dp[len][i]=(int)(str[i]-'0');
	}

	for(int i=len-1;i>=0;i--){
		for(int j=i+1;j<len;j++){
			dp[i][j]=dp[len][i]*10 + dp[len][j];
			if(dp[i][j]%8==0){
				cout<<"YES\n"<<str[i]<<str[j]<<endl;
				return 0;
			}
		}

		if(i<=len-3){
			for(int j=i+1;j<len;j++){
				for(int k=j+1;k<len;k++){
					int tmp=(int)(str[i]-'0')*100;
					tmp+=dp[j][k];
					if(tmp%8==0){
						cout<<"YES\n"<<str[i]<<str[j]<<str[k]<<endl;
						return 0;
					}
				}
			}			
		}
	}
	cout<<"NO\n";
	return 0;
}