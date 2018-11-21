#include <bits/stdc++.h>
using namespace std;

int main(){
	int s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	int first = (t1*2) + (v1*s);
	int second = (t2*2) + (v2*s);
	if(first<second)
		cout<<"First\n";
	else if(second<first)
		cout<<"Second\n";
	else
		cout<<"Friendship\n";
	return 0;
}
