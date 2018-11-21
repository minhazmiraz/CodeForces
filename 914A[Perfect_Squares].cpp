#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,maxx=(-1)*INT_MAX;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		int tmp=sqrt(a);
		if(tmp*tmp!=a) maxx=max(maxx,a);
	}
	cout<<maxx<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/