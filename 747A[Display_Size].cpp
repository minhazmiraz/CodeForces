#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i= sqrt(n);
    for(;i>0;i--)
    {
        if(n%i==0)
        {
            cout<<i<<" "<<(n/i)<<"\n";
            break;
        }
    }
    return 0;
}
