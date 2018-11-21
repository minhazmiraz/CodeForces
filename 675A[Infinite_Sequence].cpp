#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(b<a&&c>0)
        cout<<"NO\n";
    else if(b>a&&c<0)
        cout<<"NO\n";
    else if(c==0)
    {
        if(b==a)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        if((b-a)%c==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
