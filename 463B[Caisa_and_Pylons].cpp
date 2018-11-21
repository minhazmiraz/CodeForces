#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int maxx=0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		maxx=max(maxx,a);
	}
	cout<<maxx<<endl;
	return 0;
}