#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI 3.1415926535897932384626433832795
#define mx 100005
#define MOD 1000000007


int arr[mx],tree[4*mx];

void init(int i, int tl, int tr){
	if(tl==tr) tree[i]=arr[tl];
	else {
		int tm=(tl+tr)/2;
		init(2*i,tl,tm);
		init(2*i+1,tm+1,tr);
		tree[i]=tree[2*i]+tree[2*i+1];
	}
}

int query(int i, int tl, int tr, int L, int R){
	if(L>R) return 0;
	else if(tl==L && tr==R) return tree[i];
	int tm=(tl+tr)/2;
	return query(2*i,tl,tm,L,min(R,tm)) + query(2*i+1,tm+1,tr,max(L,tm+1),R);
}


long long calc[mx], po[mx];

int main(){
	calc[0]=0;
	for(int i=1, j=1;i<100001;i++){
		po[i-1]=j;
		calc[i]=(calc[i-1]+po[i-1])%MOD; j=(j*2LL)%MOD;
	}


	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0') arr[i]=0;
		else arr[i]=1; 
	}

	init(1,0, n-1);
	for(int i=1;i<=q;i++){
		int l,r;
		cin>>l>>r;
		int ans=query(1,0,n-1,l-1,r-1);
		//cout<<ans<<endl;
		cout<<(calc[ans]*po[(r-l+1)-ans])%MOD<<endl;
	}
	return 0;
}