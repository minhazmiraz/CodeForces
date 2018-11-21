#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
    for(int i=1;;i++)
    {
        if((n*i)%10==0||(n*i)%10==r)
        {
            cout<<i<<"\n";
            break;
        }

    }
    return 0;
}
