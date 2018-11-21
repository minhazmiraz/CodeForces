#include <bits/stdc++.h>
using namespace std;
string color="ROYGBIV";
int main(){
	int n;
	cin>>n;
	while(n>=7){
		cout<<color;
		n=n-7;
	}
	if(n==1)
		cout<<"G\n";
	else if(n==2){
		cout<<"YG\n";
	}else if(n==3){
		cout<<"OYG\n";
	}else if(n==4){
		cout<<"ROYG\n";
	}else if(n==5){
		cout<<"ROYGB\n";
	}else if(n==6){
		cout<<"ROYGBI\n";
	} 
	return 0;
}