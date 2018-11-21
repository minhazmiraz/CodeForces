#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	long long sum=0;
	for(int i=1;i<=n;i++){
		long long a;
		scanf("%lld",&a);
		sum+=a;
	}

	long long maxxa=0,maxxb=0;
	for(int i=1;i<=n;i++){
		long long b;
		scanf("%lld",&b);
		if(maxxa<=b){
			maxxb=maxxa;
			maxxa=b;
		} else if(maxxb<=b){
			maxxb=b;
		}
	}

//	cout<<maxxa<<" "<<maxxb<<endl;
	if(maxxa+maxxb<sum)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}

/*
	Powered by Buggy plugin
*/