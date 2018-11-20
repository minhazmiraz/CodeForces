#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	a+='0'; b+='0';
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i] && a[i+1]!=b[i+1] && a[i]==b[i+1] && b[i]==a[i+1]){
			cnt++;
			a[i]=b[i];
			a[i+1]=b[i+1];
		}
	}

	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			a[i]=b[i];
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}