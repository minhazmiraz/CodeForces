#include <bits/stdc++.h>
using namespace std;

int fs[300005], sc[300005];

int main(){
	int n;
	scanf("%d",&n);
	long long sum1=0, sum2=0;
	for(int i=1;i<=n;i++){
		scanf("%d", &fs[i]);
		sum1+=fs[i];
	}

	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		scanf("%d", &sc[i]);
		sum2+=sc[i];
	}

	if(sum1!=sum2){
		printf("-1\n");
		return 0;
	}
	sum1=0, sum2=0;
	int i=1, j=1;
	long long cnt=0;
	while(i<=n || j<=m){
		if(sum1==sum2 && sum1>0 && sum2>0){
			cnt++;
			sum1=0; sum2=0;
		} else if(sum1==0 && sum2==0 && i<=n && j<=m){
			sum1=fs[i++];
			sum2=sc[j++];
		} else if(i<=n && j<=m){
			if(sum1<sum2){
				sum1+=fs[i++];
			} else{
				sum2+=sc[j++];
			}
		} else if(i<=n){
			sum1+=fs[i++];
		} else if(j<=m){
			sum2+=sc[j++];
		}
	}
	if(sum1==sum2 && sum1>0 && sum2>0){
		cnt++;
		sum1=0; sum2=0;
	}
	if(sum1==0 && sum2==0) printf("%lld\n", cnt);
	else printf("-1\n");
	return 0;
}