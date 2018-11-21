#include <bits/stdc++.h>
using namespace std;
#define Test(x) long long x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
#define MOD 1000000007

long long x,y,n;
long long arr[10];
int main() {
    //ios_base::sync_with_stdio(0);
    cin>>x>>y>>n;
    arr[1]=(MOD+x)%MOD;
    arr[2]=(MOD+y)%MOD;
    //cout<<arr[1]<<" "<<arr[2]<<endl;
    for(int i=3;i<=6;i++){
    	arr[i]=arr[i-1]-arr[i-2];
    }
    arr[0]=arr[6];

    int temp = n%6;
    cout<<(MOD+arr[temp]) % MOD<<endl;
}