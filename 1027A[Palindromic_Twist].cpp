#include <bits/stdc++.h>
using namespace std;
int main(){
	int tcase;
	cin>>tcase;
	for(int kase=1;kase<=tcase;kase++){
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool f=1;
		for(int i=0;i<(n/2);i++){
			int alt=(n-1)-i;
			if(s[i]=='a'){
				if(s[alt]=='c' || s[alt]=='a') continue;
				else{
					cout<<"NO\n";
					f=0;
					break;
				}
			} else if(s[i]=='z'){
				if(s[alt]=='x' || s[alt]=='z') continue;
				else{
					cout<<"NO\n";
					f=0;
					break;
				}
			} else{
				if(s[alt]==s[i] || s[alt]==s[i]+2 || s[alt]==s[i]-2) continue;
				else{
					cout<<"NO\n";
					f=0;
					break;
				}
			}
		}
		if(f) cout<<"YES\n";
	}
	return 0;
}