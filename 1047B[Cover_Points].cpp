#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,y;
	int maxx=0;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		maxx=max(maxx, x+y);
	}
	cout<<maxx<<endl;
	return 0;
}