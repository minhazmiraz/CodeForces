#include <bits/stdc++.h>
using namespace std;
map< char,int > mp;
map< int,char > mint,mw;
int main(){
	mp['v']=1;
	mp['<']=2;
	mp['^']=3;
	mp['>']=0;
	mint[1]='v',mint[2]='<',mint[3]='^',mint[0]='>';
	mw[1]='v',mw[2]='>',mw[3]='^',mw[0]='<';
	char a,b;
	a=getchar();
	getchar();
	b=getchar();
	int n;
	cin>>n;
	int temp1=(mp[a]+n)%4;
	int temp2=(n%4);
	if(temp2>mp[a])
		temp2=(4-temp2)+mp[a];
	else
		temp2 = mp[a]-temp2;
	if(mint[temp1]==b && mint[temp2]==b)
		cout<<"undefined\n"<<endl;
	else if(mint[temp1]==b)
		cout<<"cw\n"<<endl;
	else if(mint[temp2]==b)
		cout<<"ccw\n"<<endl;
	else
		cout<<"undefined\n"<<endl;
	return 0;
}