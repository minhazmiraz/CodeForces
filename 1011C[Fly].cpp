#include <bits/stdc++.h>
using namespace std;
int a[1005],b[1005];
int n,m;
double hello;
bool solve(double fuel){
	double tmp;
	//cout<<fuel<<endl;
	for(int i=1;i<n;i++){
		tmp=(fuel)/a[i];	fuel-=tmp;
		//if(fuel-m<0.00000001) return 0;
		tmp=(fuel)/b[i+1];	fuel-=tmp;
		//if(fuel-m<0.00000001) return 0;
	}

	tmp=(fuel)/a[n];	fuel-=tmp;
	tmp=(fuel)/b[1];	fuel-=tmp;
	hello=fuel;
	//if(fuel-m<0.00000001) return 0;
	//if(fuel>=0.000000001) return 1;
	//return 1;
}

double bsearch(){
	double lo=m, hi=1e9, mid=0.0;
	while((hi-lo)>=0.0000000001){
		mid=(hi+lo)/2.0;
		if(((mid*hello)-m)>=0.0000000001) hi=mid;
		else lo=mid;
	}
	return lo;
}


int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==1){
			cout<<"-1\n";
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
		if(b[i]==1){
			cout<<"-1\n";
			return 0;
		}
	}
	solve(1.0);
	double ans=bsearch()-m;
	cout<<setprecision(12)<<fixed<<ans<<endl;
	return 0;
}