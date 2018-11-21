#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int f=1,s=2,t=3;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a==f)
			swap(s,t);
		else if(a==s)
			swap(f,t);
		else{
			cout<<"NO\n";
			return 0;
		}
	}

	cout<<"YES\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/