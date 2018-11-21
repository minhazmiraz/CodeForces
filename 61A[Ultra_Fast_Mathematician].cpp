#include <bits/stdc++.h>
using namespace std;
int main(){

	string str;
	cin>>str;
	getchar();
	char ch;
	int i=0;
	while((ch=getchar())!='\n'){
		if(str[i]==ch)
			cout<<"0";
		else
			cout<<"1";
		i++;
	}
	cout<<endl;
	return 0;
}