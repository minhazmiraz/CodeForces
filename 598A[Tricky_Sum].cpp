#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long n;
        cin>>n;
        long long temp=n*(n+1)/2;
        long long sum=floor(log(n)/log(2));
        temp-=2*(pow(2,sum+1)-1);
        cout<<temp<<"\n";    }
    return 0;
}
