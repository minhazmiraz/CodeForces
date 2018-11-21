#include <bits/stdc++.h>
using namespace std;
vector< pair< double, int > > vc;
int main(){
	int n,t1,t2,k;
	cin>>n>>t1>>t2>>k;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		double tmp = max((((a*t1)-(a*t1*(k/100.0))) + (b*t2)), (((b*t1)-(b*t1*(k/100.0))) + (a*t2)));
		vc.push_back({(-1)*tmp,i});
	}
	sort(vc.begin(), vc.end());
	for(int i=0;i<vc.size();i++){
		cout<<setprecision(2)<<fixed<<vc[i].second<<" "<<(-1)*vc[i].first<<endl;
	}
	return 0;
}