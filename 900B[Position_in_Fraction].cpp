#include <bits/stdc++.h>
using namespace std;

int main(){
	int cnt=0;
	int a,b,c;
	cin>>a>>b>>c;
	int temp=(a%b);
	while(cnt<=10000){
		cnt++;
		temp*=10;
		//cout<<temp<<endl;
		int val=temp/b;
		if(val==c){
			cout<<cnt<<endl;
			return 0;
		}
		temp=(temp%b);
	}
	cout<<"-1\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/