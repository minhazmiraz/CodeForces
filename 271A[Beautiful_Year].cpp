#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int n,i;
	cin>>n;
	for(i=n+1;i<=9012;i++){
		int tmp=i;
		bool f=1,vis[15];
		memset(vis,0,sizeof vis);
		while(tmp){
			int t=tmp%10;
			if(vis[t]){
				f=0; break;
			}
			vis[t]=1;
			tmp/=10;
		}
		if(f) break;
	}
	cout<<i<<endl;
    return 0;
}
