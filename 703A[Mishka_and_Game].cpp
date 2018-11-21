#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,mcnt=0,ccnt=0;
	cin>>n;
	for (int i = 0; i < n; ++i) {
		int m,c;
		cin>>m>>c;
		if(m>c)
			mcnt++;
		else if(m<c)
			ccnt++;
	}
	if(mcnt>ccnt)
		cout<<"Mishka\n";
	else if (ccnt>mcnt) {
		cout<<"Chris\n";
	}
	else
		cout<<"Friendship is magic!^^\n";
	return 0;
}
