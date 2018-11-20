#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI 3.1415926535897932384626433832795
#define EPS 1e-10


int main(){
	int t; cin>>t;
	while(t--){
		int d;
		cin>>d;
		if(d==0.0) cout<<"Y 0.000000000 0.000000000\n";
		else if(d==4.00) cout<<"Y 2.000000000 2.000000000\n";
		else{
			double lo=0, hi=d, a, b, ans=-1.000;
			for(int i=1;i<=200;i++){
				a=(lo+hi)/2.0;
				b=(d/a);
				if(a+b-d<=EPS){
					ans=a;
					hi=a;
				} else lo=a;
			}
			if(ans!=-1.00) cout<<fixed<<setprecision(9)<<"Y "<<b<<" "<<d-b<<endl;
			else cout<<"N\n";
		}
	}
	return 0;
}