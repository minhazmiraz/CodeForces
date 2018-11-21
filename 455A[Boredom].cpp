#include <bits/stdc++.h>
using namespace std;
long long arr[100005],d[100005],n,sz;
vector< long long > vc;

long long dp(long long i){
	if(d[i]!=-1)
		return d[i];
	if(i>=sz){
		return 0;
	} else if(i==sz-1){
		return d[i]=arr[vc[i]]*vc[i];
	}

	long long t;
	if(vc[i]+1==vc[i+1])
		t=i+2;
	else
		t=i+1;
	long long p1=(arr[vc[i]]*vc[i])+dp(t);
	long long p2=dp(i+1);
	d[i]=max(p1,p2);
	return d[i];	
}

int main(){
	cin>>n;
	memset(arr,0,sizeof arr);
	for(int i=1;i<=n;i++){
		long long a;
		cin>>a;
		if(!arr[a])
			vc.push_back(a);
		arr[a]++;
	}
	sort(vc.begin(),vc.end());
	sz=vc.size();
	memset(d,-1,sizeof d);
	cout<<max(dp(1),dp(0))<<endl;
	return 0;
}