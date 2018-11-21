#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int temp=abs(a-b);
	int one=temp/2;
	int two=temp-one;
	cout<<((one*(one+1))/2.0)+((two*(two+1))/2.0)<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/