#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector< int > vc;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		vc.push_back(a);
	}
	sort(vc.begin(), vc.end());
	if(k==0){
		if(vc[0]!=1) cout<<vc[0]-1<<endl;
		else cout<<"-1\n";
		return 0;
	}
	if(vc[k-1]==vc[k])
		cout<<"-1\n";
	else
		cout<<vc[k-1]<<endl;
	return 0;
}