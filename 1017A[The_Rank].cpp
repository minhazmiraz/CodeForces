#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector < int > vc;
	int sum=0;
	for(int i=1;i<=n;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(i==1) sum=a+b+c+d;
		vc.push_back(-(a+b+c+d));
	}
	sort(vc.begin(), vc.end());
	int ans=lower_bound(vc.begin(), vc.end(), (-sum))-vc.begin();
	cout<<ans+1<<endl;
	return 0;
}