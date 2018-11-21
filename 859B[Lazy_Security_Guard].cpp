#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sq=sqrt(n);
	if(sq*sq != n){
		if((sq+1)*sq>=n)
			cout<<((sq+1)*2)+(sq*2)<<endl;
		else
			cout<<((sq+1)*2)+((sq+1)*2)<<endl;
	} else
		cout<<sq*4<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/