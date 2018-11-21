#include <bits/stdc++.h>
using namespace std;

int main(){
	string str[15];

	for(int i=0;i<11;i++){
		getline(cin,str[i]);
		//cout<<str[i]<<endl;
	}

	int a,b;
	cin>>a>>b;
	

	//cout<<a<<" "<<b<<endl;
	a=a%3; b=b%3;

	int start, last;
	if(a==0)
		start=8;
	else if(a==1)
		start=0;
	else
		start=4;

	if(b==0)
		last=8;
	else if(b==1)
		last=0;
	else
		last=4;


	//cout<<start<<" "<<last<<endl;

	int flag=0;
	for(int i=start;i<=start+2;i++){
		for(int j=last;j<=last+2;j++){
			if(str[i][j]=='.'){
				flag=1; break;
			}
		}

		if(flag) break;
	}

	if(flag){
		for(int i=0;i<11;i++){
			for(int j=0;j<11;j++){
				if(i==3 || j==3 || i==7 || j==7){
					cout<<" ";
					continue;
				}
				if(i>=start && i<=start+2 && j>=last && j<=last+2 && str[i][j]=='.')
					str[i][j]='!';
				cout<<str[i][j];
			}
			cout<<endl;
		}
	} else{
		for(int i=0;i<11;i++){
			for(int j=0;j<11;j++){
				if(i==3 || j==3 || i==7 || j==7){
					cout<<" ";
					continue;
				}

				if(str[i][j]=='.')
					str[i][j]='!';
				cout<<str[i][j];
			}
			cout<<endl;
		}
	}


	return 0;
}

/*
	Powered by Buggy plugin
*/