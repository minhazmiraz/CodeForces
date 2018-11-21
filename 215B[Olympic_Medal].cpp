#include <bits/stdc++.h>
using namespace std;

int x[5005], y[5005], z[5005];
int maxx=0, maxy=0, minz=50000;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i];
		maxx=max(maxx,x[i]);
	}

	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>y[i];
		maxy=max(maxy, y[i]);
	}

	int k;
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>z[i];
		minz=min(minz, z[i]);
	}

	int a,b;
	cin>>a>>b;

	double ans=0.0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			double tmp = x[i]*sqrt((b*y[j])/(a*minz + b*y[j] + .0));
			if(tmp-ans>0.0000001) ans=tmp;
		}
	}

	cout<<setprecision(12)<<fixed<<ans<<endl;
	return 0;
}