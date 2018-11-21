#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	long long n,m,prev=1,sum=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a;
		cin>>a;
		if(a-prev>=0) sum+=(a-prev);
		else sum+=(n-prev+a);
		prev=a;
	}
	cout<<sum<<endl;
    return 0;
}
