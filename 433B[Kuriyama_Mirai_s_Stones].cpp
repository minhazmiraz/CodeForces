#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

long long arr[100010],sum[3][100010];
int main() {
    //ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	sum[1][0]=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum[1][i+1]=arr[i]+sum[1][i];
	}
	sort(arr,arr+n);
	sum[2][0]=0;
	for(int i=0;i<n;i++){
		sum[2][i+1]=arr[i]+sum[2][i];
	}

	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int type,l,r;
		cin>>type>>l>>r;
		cout<<sum[type][r]-sum[type][l-1]<<endl;
	}
    return 0;
}
