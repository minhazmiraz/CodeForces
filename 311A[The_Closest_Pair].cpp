#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main(){
	int n,k;
	cin>>n>>k;
	LL tmp=(n*(n-1))/2.0;
	if(tmp<=k) cout<<"no solution\n";
	else{
		for(int i=1;i<=n;i++){
			cout<<"0 "<<i-1<<endl;
		}
	}
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
pair< int, int > p[2005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>p[i].first>>p[i].second;
	sort(p,p+n);
	int d=INT_MAX, tot=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			++tot;
			if(((p[j].first-p[i].first)*(p[j].first-p[i].first)) >= d) break;

			d=min(d, (((p[j].first-p[i].first)*(p[j].first-p[i].first))
						+ (p[j].second-p[i].second)*(p[j].second-p[i].second)));
		}
	}
	cout<<tot<<endl;
	return 0;
}
*/