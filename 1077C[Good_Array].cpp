#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI acos(-1)

int arr[200005], cnt[1000005];
int main(){
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i]; sum+=arr[i];
		cnt[arr[i]]++;
	}

	int ans=0;
	vector< int > vc;
	for(int i=1;i<=n;i++){
		if((sum-arr[i])%2==0){
			cnt[arr[i]]--;
			long long tmp=(sum-arr[i])/2;
			if(tmp<=1000000 && cnt[tmp]){
				ans++;
				vc.push_back(i);
			}
			cnt[arr[i]]++;
		}
	}
	cout<<ans<<endl;
	for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
	cout<<endl;
	return 0;
}