#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI acos(-1)

int main(){
	long long n;
	cin>>n;
	long long ans=0;
	for(int i=2;i<=n;i++){
		long long tmp=n/i;
		if(tmp>=2) ans+=(((tmp*(tmp+1))/2)-1)*4;
		else break;
	}
	cout<<ans<<endl;
	return 0;
}


/*
	if i*j is less than n where 2<=i<=n && 2<=j<=n
	that is n/i is greater than 2 where 2<=i<=n
	then there is a cycle graph with edge like this 
	2 * 2 => 4 <= -2 * 2
	-2 * 2 => -4 <= -2 * -2

	we can write this like this: 
	2 => 4 => -2 => -4 => 2
*/