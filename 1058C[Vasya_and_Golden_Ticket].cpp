#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sum[105];

	sum[0]=s[0]-'0';
	for(int i=1;i<s.length();i++){
		sum[i]=(s[i]-'0')+sum[i-1];
	}

	for(int i=n;i>1;i--){
		if(sum[n-1]%i == 0){
			int val=sum[n-1]/i;
			int loc=0;
			bool flag=1;
			for(int j=1;j<=i;j++){
				loc=lower_bound(sum,sum+n, val*j)-sum;
				if(sum[loc]!=val*j){
					flag=0; break;
				}
			}
			if(flag){
				cout<<"YES\n";
				return 0;
			}
		}
	}

	cout<<"NO\n";

	return 0;
}