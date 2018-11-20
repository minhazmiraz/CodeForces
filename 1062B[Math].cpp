#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI acos(-1)

int main(){
	long long n, mul=1;
	cin>>n;
	if(n==1){
		cout<<1<<" "<<0<<endl;
		return 0;
	}
	int p=2, mx=0, sqrtN=sqrt(n);
	bool f=0;
	while(n>1 && p<=sqrtN){
		int cnt=0;
		while(n%p==0){ cnt++; n/=p; }
		if(cnt){
			mul*=p;
			if(mx && mx!=cnt) f=1;
		}
		mx=max(mx, cnt);
		if(p==2) p++;
		else p+=2;
	}
	if(n>1){
		int cnt=1;
		if(cnt) mul*=n;
		if(mx && mx!=cnt) f=1;
		mx=max(mx, cnt);
	}
	int tmp=log2(mx);
	cout<<mul<<" ";
	if(pow(2, tmp)!=mx) cout<<tmp+2<<endl;
	else if(f) cout<<tmp+1<<endl;
	else cout<<tmp<<endl;
	return 0;
}