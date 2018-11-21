#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t=4,c=6,o=8,d=12,i=20,cnt=0;
	cin>>n;
	for(int j=1;j<=n;j++){
		string str;
		cin>>str;
		if(str[0]=='T')
			cnt+=t;
		else if(str[0]=='C')
			cnt+=c;
		else if(str[0]=='O')
			cnt+=o;
		else if(str[0]=='D')
			cnt+=d;
		else if(str[0]=='I')
			cnt+=i;
	}
	cout<<cnt<<"\n";
	return 0;
}