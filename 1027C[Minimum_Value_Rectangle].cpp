#include <bits/stdc++.h>
using namespace std;
int main(){
	int tcase;
	scanf("%d",&tcase);
	while(tcase--){
		int n;
		scanf("%d",&n);
		int vis[10005];
		memset(vis,0,sizeof vis);
		vector< int > vc;
		for(int i=1;i<=n;i++){
			int a;
			scanf("%d",&a);
			vis[a]++;
			if(vis[a]==2){
				vc.push_back(a);
				vis[a]=0;
			}
		}

		sort(vc.begin(), vc.end());

		double one, two; 
		long long ans1, ans2;
		double minn=9000000000000, tmp;
		
		for(int i=1;i<vc.size();i++){
			one=vc[i], two=vc[i-1];
			if(minn>((one/two)+(two/one))){
				minn=((one/two)+(two/one));
				ans1=vc[i], ans2=vc[i-1];
			}			
		}
		printf("%lld %lld %lld %lld\n", ans1, ans1, ans2, ans2);
	}
	return 0;
}