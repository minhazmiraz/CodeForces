#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	Test(a1); Test(a2); Test(a3);
	Test(b1); Test(b2); Test(b3);
    Test(n);
    int a=a1+a2+a3;
    int b=b1+b2+b3;
    int sum=ceil(a/5.0)+ceil(b/10.0);
    if(sum<=n) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
