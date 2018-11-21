#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int ans=0;
	for(int i=0;i<str.length();i++){
		if(str[i]!='x') continue;
		int j=i, cnt=0;
		for(j=i;j<str.length();j++){
			if(str[j]=='x') cnt++;
			else break;
		}
		if(cnt>=3) ans+=(cnt-2);
		i=j;
	}
	cout<<ans<<endl;
	return 0;
}