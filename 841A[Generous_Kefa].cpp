#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int ch[30];
	memset(ch,0,sizeof ch);
	for(int i=1;i<=n;i++){
		char c;
		cin>>c;
		ch[c-'a']++;
	}
	int flag=1;
	for(int i=0;i<26;i++){
		if(ch[i]>k){
			flag=0; break;
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}