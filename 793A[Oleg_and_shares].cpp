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


int main() {
    //ios_base::sync_with_stdio(0);
    long long n,k;
    cin>>n>>k;
    long long a,sum=0,minn=1e15;
    vector<long long> vc;
	cin>>a;
	long long temp=a%k;
	vc.push_back(a);
	minn=min(minn,a);
    for(long long i=2;i<=n;i++){
    	cin>>a;
    	if(a%k!=temp){
    		cout<<"-1\n";
    		return 0;
    	}
    	minn=min(minn,a);
    	vc.push_back(a);
    }
    for(int i=0;i<vc.size();i++){
    	if(vc[i]==minn) continue;
    	sum+=((vc[i]-minn)/k);
    }
    cout<<sum<<endl;
    return 0;
}
