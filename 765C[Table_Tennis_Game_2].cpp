#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,a,b;
    cin>>k>>a>>b;
    if(a/k==0&&b/k==0)
        cout<<"-1\n";
    else if(a/k==0)
    {
        if(b%k)
            cout<<"-1\n";
        else
            cout<<b/k<<"\n";
    }
    else if(b/k==0)
    {
        if(a%k)
            cout<<"-1\n";
        else
            cout<<a/k<<"\n";
    }
    else
        cout<<(a/k)+(b/k)<<"\n";
    return 0;
}
