#include <bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin>>k;
	vector< int > vc;
	for(int i=1;i<=k;i++){
		int a;
		cin>>a;
		vc.push_back(a);
	}
	sort(vc.begin(),vc.end());
	if(vc[vc.size()-1]>25)
		cout<<vc[vc.size()-1]-25<<endl;
	else cout<<"0"<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/