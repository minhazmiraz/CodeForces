#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI acos(-1)


int arr[200005], cn[200005];
int n,k;
bool solve(int p){
	int cnt=0;
	for(int i=1;i<=200000;i++){
		cnt+=(cn[i]/p);
	}
	return cnt>=k;
}



int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		cn[arr[i]]++;
	}
	int lo=1, hi=200000, mid, ans;
	while(lo<=hi){
		mid=lo+(hi-lo)/2;
		if(solve(mid)){
			ans=mid;
			lo=mid+1;
		} else hi=mid-1;
	}

	for(int i=1;i<=200000;i++){
		int p = min(cn[i]/ans, k);
		k-=p;
		for(int j=1;j<=p;j++) cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}