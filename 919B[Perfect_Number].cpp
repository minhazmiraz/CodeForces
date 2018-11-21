#include <bits/stdc++.h>
using namespace std;

int main(){
	vector < int > vc;
	for(int i=19;vc.size()<10005;i+=9){
		int sum=0,tmp=i;
		while(tmp){
			sum+=tmp%10;
			tmp/=10;
		}
		if(sum==10) vc.push_back(i);
	}

	int k;cin>>k;
	k--;
	cout<<vc[k]<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/