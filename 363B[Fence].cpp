#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int n,k,arr[150005];
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	int hi=1,lo=1,ans=1,minn=INT_MAX,sum=arr[1];
	while(hi<=n){
		if((hi-lo+1)==k){
			if(minn>sum){
				minn=min(minn,sum);
				ans=lo;
			}
			sum-=arr[lo];
			lo++;
		} else{
			hi++;
			sum+=arr[hi];
		}
	}
	cout<<ans<<endl;
    return 0;
}
