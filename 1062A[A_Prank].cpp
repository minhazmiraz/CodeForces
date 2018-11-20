#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI 3.1415926535897932384626433832795

int a[105];
int main(){
	int n;
	cin>>n;
	a[0]=1;
	for(int i=1;i<=n;i++) cin>>a[i];
	a[n+1]=1000;
		
	int cnt=0, f=0, mx=0;
	for(int i=1;i<=n;i++){
		if(!f){
			mx=max(mx, cnt);
			cnt=0;
		}
		if(i==1 && a[i]-a[i-1]==0 && a[i+1]-a[i]<=1) f=1, cnt++;
		else if(i==n && a[i]-a[i-1]<=1 && a[i+1]-a[i]==0) f=1, cnt++;
		else if(i>1 && i<n && a[i]-a[i-1]<=1 && a[i+1]-a[i]<=1) f=1, cnt++;
		else f=0;	
	}
	mx=max(mx, cnt);
	
	cout<<mx<<endl;
	return 0;
}