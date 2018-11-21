#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	long long n, k;
	cin>>n>>k;
	string str;
	cin>>str;
	long long cnt[30]={0};
	for(int i=0;i<str.length();i++){
		cnt[(int)(str[i]-'A')]++;
	}
	priority_queue< pair < long long, long long > > pq;
	for(int i=0;i<26;i++){
		pq.push({cnt[i],i});
	}
	long long ans=0;
	while(!pq.empty() && k>0){
		if(pq.top().first>=k){
			ans+=(k*k);
			k=0;
		} else{
			ans+=(pq.top().first*pq.top().first);
			k-=pq.top().first;
		}
		pq.pop();
	}
	cout<<ans<<endl;
    return 0;
}
