#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)

int a[105];
int main(){
	int n;
	cin>>n;
	int mx=0, osum=0, wsum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		osum+=a[i]; mx=max(mx, a[i]);
	}
	for(int i=1;i<=n;i++){
		wsum+=(mx-a[i]);
	}

	while(wsum<=osum){
		mx++; wsum+=n;
	}
	cout<<mx<<endl;
	return 0;
}