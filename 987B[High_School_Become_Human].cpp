#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x==y) cout<<"=\n";
	else if(x==1) cout<<"<\n";
	else if(y==1) cout<<">\n";
	else if(x==2){
		if(y==3) cout<<"<\n";
		else if(y==4) cout<<"=\n";
		else cout<<">\n";
	} else if(y==2){
		if(x==3) cout<<">\n";
		else if(x==4) cout<<"=\n";
		else cout<<"<\n";
	} else if(x>y) cout<<"<\n";
	else if(x<y) cout<<">\n";
	return 0;
}