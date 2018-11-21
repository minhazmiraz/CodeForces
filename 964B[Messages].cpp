#include <bits/stdc++.h>
using namespace std;
long long arr[1005];
long long n,A,B,C,T;

int main(){
	cin>>n>>A>>B>>C>>T; 
	long long sum=0;
	for(long long i=1;i<=n;i++){
		cin>>arr[i];
		//time[arr[i]]++;
		long long maxx=0;
		for(long long j=0;j<=T-arr[i];j++){
			maxx=max(maxx,A-(j*B)+(j*C));
		}
		sum+=maxx;
	}

	cout<<sum<<endl;

	return 0;
}