#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	if(str.length()==1){
		cout<<"0\n";
		return 0;
	}
	int sum=0, cnt=1;
	for(int i=0;i<str.length();i++){
		sum+=(str[i]-'0');
	}
	while(sum){
		int tmp=0, coun=0;
		while(sum){
			tmp+=(sum%10);
			sum/=10;
			coun++;
		}
		if(coun==1) break;
		sum=tmp;
		cnt++;
	}
	cout<<cnt<<endl;
	
	return 0;
}