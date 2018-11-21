#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[200005];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	string str;
	cin>>str;

	for(int i=0,p=1;i<str.length();i++){
		if(str[i]=='0'){
			if(arr[i+1]<p){
				cout<<"NO\n";
				return 0;
			}
			p=i+2;
		} else if(arr[i+1]<p){
			cout<<"NO\n";
			return 0;
		}
	}

	for(int i=str.length()-1,p=n;i>=0;i--){
		if(str[i]=='0'){
			if(arr[i+1]>i+1){
				cout<<"NO\n";
				return 0;
			}
			p=i+1;
		} else if(arr[i+1]>p){
			cout<<"NO\n";
			return 0;
		}
	}

	if(str[str.length()-1]=='0' && arr[n]!=n)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/