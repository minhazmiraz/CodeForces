#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y
#define Test(x) int x;cin>>x
#define mem(x,val) memset((x),(val),sizeof(x));
#define NL printf("\n")
#define SP printf(" ")
#define clr(a) memset(a, 0, sizeof a)
#define reset(a) memset(a, -1, sizeof a)

int main(){
	long long n,f,cnt=0;
	cin>>n>>f;
	vector< pair< long long, pair< long long , long long > > > vc;
	for(long long i=1;i<=n;i++){
		long long k,l;
		cin>>k>>l;
		cnt+=min(k,l);
		long long temp = -(min(2*k,l)-min(k,l));
		vc.pb({temp,{k,l}});
	}

	sort(vc.begin(),vc.end());
	for(long long i=0;i<f;i++){
		long long t1=vc[i].second.first;
		long long t2=vc[i].second.second;
		cnt-=min(t1,t2);
		cnt+=min(2*t1,t2);
	}
	cout<<cnt<<endl;
	return 0;
}