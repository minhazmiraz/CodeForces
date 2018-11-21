#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long a,b;
	cin>>a>>b;
	while(a!=0 && b!=0){
		if(a>=2*b){
			long long tmp=a/(2*b);
			a-=tmp*2*b;
			continue;
		} else if(b>=2*a){
			long long tmp=b/(2*a);
			b-=tmp*2*a;
			continue;
		} else{
			break;
		}
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/