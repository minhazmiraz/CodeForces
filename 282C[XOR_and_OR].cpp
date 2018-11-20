#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	if(a.length()!=b.length()) return cout<<"NO\n", 0;
	int acnt=0, bcnt=0;
	for(int i=0;i<a.length();i++) if(a[i]=='1') acnt++;
	for(int i=0;i<b.length();i++) if(b[i]=='1') bcnt++;

	if(acnt>0 && bcnt>0) cout<<"YES\n";
	else if(a==b) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}