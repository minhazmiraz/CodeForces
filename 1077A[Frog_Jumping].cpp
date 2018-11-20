#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI acos(-1)

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a,b,k;
		cin>>a>>b>>k;
		long long tmp=a-b;
		long long ans=ans=(k/2)*tmp;
		if(k%2!=0) ans+=a;
		cout<<ans<<endl;
	}
	return 0;
}