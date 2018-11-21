#include <bits/stdc++.h>
using namespace std;

int main(){
	double h1,a1,c1,h2,a2;
	cin>>h1>>a1>>c1>>h2>>a2;
	if(ceil(h1/a2)>=ceil(h2/a1)){
		cout<<ceil(h2/a1)<<endl;
		int t=ceil(h2/a1);
		for(int i=1;i<=t;i++)
			cout<<"STRIKE\n";
	} else{
		

		int heal=0;
		while(ceil(h2/a1)>ceil(h1/a2)){
			heal++;
			h1=h1+c1-a2;
		}
		cout<<heal+ceil(h2/a1)<<endl;
		for(int i=1;i<=heal;i++)
			cout<<"HEAL\n";
		int t=ceil(h2/a1);
		for(int i=1;i<=t;i++)
			cout<<"STRIKE\n";
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/