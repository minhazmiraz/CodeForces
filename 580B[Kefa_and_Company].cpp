#include <bits/stdc++.h>
using namespace std;
vector< pair< int, int > > vc;
int main(){
	int n,d;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		int m,f;
		cin>>m>>f;
		vc.push_back({m,f});
	}

	sort(vc.begin(), vc.end());

	long long maxx=0, lo=0, hi=0, sum=0;
	while(lo<=hi && hi<n){
		if((vc[hi].first-vc[lo].first)>=d){
			maxx=max(maxx,sum);
			sum-=vc[lo].second; lo++;
		} else{
			sum+=vc[hi].second;
			hi++;
		}
	}
	maxx=max(maxx,sum);

	cout<<maxx<<endl;
	return 0;
}