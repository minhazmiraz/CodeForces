#include<bits/stdc++.h>
using namespace std;
long long cnt[1000000];
int main()
{
    long long m,n;
    cin>>m>>n;
    long long ans = 0,v;
    for(int i=0;i<m;i++)
    {
        cin>>v;
        ans += cnt[n^v];
        cnt[v]++;
    }
    cout<<ans<<"\n";
    return 0;
}
