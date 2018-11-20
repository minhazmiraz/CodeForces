#include <bits/stdc++.h>
using namespace std;
int lt[200005], rt[200005];
int main(){
	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			lt[i]=lt[i-1]+1;
			rt[i]=rt[i-1];
		} else{
			lt[i]=lt[i-1];
			rt[i]=rt[i-1]+1;
		}
	}

	int tmp=k/2;
	string ans="";
	for(int i=0;i<n;i++){
		if(lt[i]-1==lt[i-1] && lt[i]<=tmp) ans+='(';
		
		if(rt[i]-1==rt[i-1] && rt[i]<=tmp) ans+=')';
	}
	cout<<ans<<endl;
	return 0;
}