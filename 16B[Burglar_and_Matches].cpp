#include <bits/stdc++.h>
using namespace std;

vector< pair< int, long long > > vc;

int main(){
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=m;i++){
		long long a,b;
		cin>>a>>b;
		vc.push_back({b,a});
	}
	sort(vc.begin(), vc.end());
	long long sum=0;
	for(long long i=vc.size()-1;i>=0;i--){
		if(vc[i].second<=n){
		    sum+=vc[i].first * vc[i].second; n-=vc[i].second;
		}else{
		    sum+=vc[i].first * n; n=0;
		}
		//cout<<n<<" "<<vc[i].first<<endl;
	}
	cout<<sum<<endl;
	return 0;
}