#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,b,cnt=0;
	cin>>n>>a>>b;
	int tmp1=a,tmp2=b;
	while(tmp1!=tmp2){
		if(tmp1%2!=0) tmp1++;
		if(tmp2%2!=0) tmp2++;
		tmp1/=2;
		tmp2/=2;
		cnt++;
	}
	int depth=log2(n);
	if(cnt==depth)
		cout<<"Final!\n";
	else
		cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/