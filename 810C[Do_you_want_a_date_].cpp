#include <bits/stdc++.h>
using namespace std;
#define debug(x,y) cout<<x<<y
#define pb push_back
#define mp make_pair
#define Test(x) int x;cin>>x
#define mem(x,val) memset((x),(val),sizeof(x));
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define loop(i,a,n) for(auto i=a; i<(n); i++)
#define rloop(i,a,n) for(auto i=a; i>(n); i--)
#define pb push_back
#define mp make_pair
#define clr clear()
#define inf (1<<30)
#define MOD 1000000007

typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef pair<int,int> pii;
typedef pair<string,string> pss;
typedef vector<pii> vpii;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef map<st,st> mss;
typedef map <string,vs> msvs;
typedef set<int> si;
typedef set<st> ss;


i64 bigmod(i64 n,int i){
    if(i==0) return 1 % MOD;
    i64 res = bigmod(n,i/2) % MOD;
    res = (res*res) % MOD;
    if(i%2!=0) res= (res*n) % MOD;
    return res;
}


int main() {
    //ios_base::sync_with_stdio(0);
    i64 n;
    cin>>n;
    vector< i64 > vc;
    for(int i=0;i<n;i++){
        i64 a;
        cin>>a;
        vc.pb(a);
    }
    sort(vc.begin(),vc.end());
    i64 mxsum=0,mnsum=0;
    for(int i=0;i<n;i++){
        mxsum=(mxsum+(bigmod(2,i)*vc[i])) % MOD;
        mnsum=(mnsum+(bigmod(2,n-i-1)*vc[i])) % MOD;
    }

    i64 res=(MOD+mxsum-mnsum) % MOD;
    //cout<<mxsum<<" "<<mnsum<<endl;
    cout<<res<<endl;
    return 0;
}
