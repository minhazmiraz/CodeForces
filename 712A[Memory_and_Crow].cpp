#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a,b;
    cin>>a;
    b=a;
    for(long long i=1;i<n;i++)
    {
        cin>>a;
        cout<<a+b<<" ";
        b=a;
    }
    cout<<a<<"\n";
    return 0;
}
