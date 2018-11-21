#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c,cnt=1;
    cin>>n>>c;
    long long a,b;
    cin>>a;
    b=a;
    for(long long i=2;i<=n;i++)
    {
        cin>>a;
        b=a-b;
        if(b<=c)
            cnt++;
        else
            cnt=1;
        b=a;
    }
    cout<<cnt<<"\n";
    return 0;
}
