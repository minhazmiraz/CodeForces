#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	long long minn=(2*1e18), maxx=-(2*1e18), sum=0;
	for(int i=1;i<=n;i++){
		long long lt=i-1;
		long long rt=n-i;
		long long total=(lt*(lt+1))/2+(rt*(rt+1))/2;
		minn=min(minn, total);
		maxx=max(maxx, total);
	}

	for(int i=1;i<=m;i++){
		long long x,d;
		cin>>x>>d;
		if(d<0) sum=sum+(n*x)+(d*minn);
		else sum=sum+(n*x)+(d*maxx);
	}
	cout<<setprecision(17)<<fixed<<sum/(double)n<<endl;
	return 0;
}