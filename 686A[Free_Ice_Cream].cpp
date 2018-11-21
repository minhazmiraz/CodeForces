#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,cnt=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        char ch;
        long long a;
        cin>>ch>>a;
        if(ch=='+')
            x+=a;
        if(ch=='-')
        {
            if(x>=a)
                x-=a;
            else
                cnt++;
        }
    }
    cout<<x<<" "<<cnt<<"\n";
    return 0;
}
