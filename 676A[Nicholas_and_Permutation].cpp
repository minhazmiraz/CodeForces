#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,minn=200,maxx=0,checkmx,checkmn;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a>maxx)
        {
            maxx=a;
            checkmx=i;
        }
        if(a<minn)
        {
            minn=a;
            checkmn=i;
        }
    }
    int mx = max(checkmn,checkmx);
    int mn = min(checkmn,checkmx);
    if(n-mn>mx-1)
        cout<<n-mn<<"\n";
    else
        cout<<mx-1<<"\n";
    return 0;
}
