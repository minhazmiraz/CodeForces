#include <bits/stdc++.h>
using namespace std;

int main(){
	double r,d;
	cin>>r>>d;
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		double ri;
		cin>>x>>y>>ri;
		double dis=sqrt((x*x)+(y*y));
		//cout<<dis<<endl;
		if((dis+ri)<=r && ((r-d)+ri)<=dis)
			cnt++;
	}
	cout<<cnt<<"\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/