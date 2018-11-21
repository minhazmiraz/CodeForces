#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		sum+=a;
	}
	if(sum%n==0){
		cout<<n<<endl;
	} else
		cout<<n-1<<endl;
    return 0;
}
