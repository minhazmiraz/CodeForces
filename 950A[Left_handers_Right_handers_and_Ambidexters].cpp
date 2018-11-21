#include<bits/stdc++.h>

using namespace std;

int main()
{
	int l, r, a;
	cin>>l>>r>>a;
	int ans=min(l,r);
	l-=ans, r-=ans;
	int tmp=min(l,a)+min(r,a);
	a-=tmp;
	tmp+=a/2;
	ans+=tmp;
	cout<<2*ans<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/