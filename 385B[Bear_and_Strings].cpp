#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	if(str.length()<4){
		cout<<"0\n";
		return 0;
	}
	int prev=0;
	long long sum=0;
	for(int i=0;i<str.length()-3;i++){
		if(str.substr(i,4)=="bear"){
			sum+=(i+1-prev)*(str.length()-(i+3));
			prev=i+1;
		}
	}
	cout<<sum<<endl;
	return 0;
}