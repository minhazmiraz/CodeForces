#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int x,y;
	cin>>x>>y;
	int k;cin>>k;
	long long move=0;
	for(int i=1;i<=k;i++){
		int a,b; long long tmp=INT_MAX;
		cin>>a>>b;
		if(a<0) tmp=min(tmp, (long long)((x-1)/(-a)));
		else if(a>0) tmp=min(tmp, (long long)((n-x)/a));

		if(b<0) tmp=min(tmp, (long long)((y-1)/(-b)));
		else if(b>0) tmp=min(tmp, (long long)((m-y)/b));
		move+=tmp;
		x+=a*tmp; y+=b*tmp;
//		cout<<tmp<<" "<<x<<" "<<y<<endl;
	}
	cout<<move<<endl;
	return 0;
}