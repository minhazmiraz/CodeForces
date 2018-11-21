#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=1,maxx=0;
	cin>>n;
	int a;
	cin>>a;
	int b = a;
	for (int i = 1; i < n; ++i) {
		cin>>a;
		if(b<a){
			cnt++;
			//cout<<a<<b<<cnt<<" ";
		}
		else{
			maxx=max(cnt, maxx);
			cnt=1;
		}
		b=a;
	}
	maxx=max(cnt, maxx);
	cout<<maxx<<"\n";
	return 0;
}

