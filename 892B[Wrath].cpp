#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	long long arr[n+5];
	for(int i=1;i<=n;i++){
		scanf("%lld",&arr[i]);
	}

	long long minn=INT_MAX,cnt=0;
	for(int i=n;i>0;i--){
		if(arr[i]>=i){
			if(i<minn)
				cnt++;
			break;
		}
		//cout<<cnt<<" "<<minn<<endl;
		if(i<minn)
			cnt++;
		minn=min(minn,i-arr[i]);
	}
	cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/