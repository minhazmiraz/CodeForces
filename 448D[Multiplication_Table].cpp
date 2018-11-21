#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,k;
	cin>>n>>m>>k;
	long long lo=1, hi=n*m;
	while(lo<=hi){
		long long mid=(lo+hi)/2;
		long long sum=0;
		for(long long i=1;i<=n;i++) sum+=min(m,(mid-1)/i);
		if(sum>=k) hi=mid-1;
		else lo=mid+1;
	}
	cout<<lo-1<<endl;
	return 0;
}