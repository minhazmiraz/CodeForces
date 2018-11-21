#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,sum=0;
    cin>>n>>h;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a>h)
            sum+=2;
        else
            sum+=1;
    }
    cout<<sum<<"\n";
    return 0;
}
