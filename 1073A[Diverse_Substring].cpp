#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s, ans="#";
	cin>>s;
	for(int i=0, j=0;i<n;i++){
		if(s[i]!=ans[j]){
			ans+=s[i]; j++;
		}
	}
	if(ans.length()>2){
		cout<<"YES\n";
		cout<<ans[1]<<ans[2]<<endl;
	}else{
		cout<<"NO\n";
	}
	return 0;
}