#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
int arr[200005];
int main(){
	int n,k;
	INT(n); INT(k);
	for(int i=1;i<=n;i++){
		INT(arr[i]);
	}
	arr[n+1]=0;
	long long sum=0, ans=0, day=0;
	for(int i=1;i<=n;i++){
		sum+=arr[i];
		if(sum>=k){
			ans+=(sum/k);
			sum=sum%k;
			if(sum) day=1;
			else day=0;
		} else if(day){
			ans++;
			day=0;
			sum=0;
		} else if(sum) day=1;
	}
	if(sum) ans++;
	printf("%lld\n", ans);
	return 0;
}