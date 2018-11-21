#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    long long minn = 1000000010;
    if(n%4==0)
    {
        minn = 0;
    }
    else
    {
        long long temp = n/4;
        long long i = (temp+1)*4-n;
        for(long long k=i;k<=i+(3*4);k+=4)
        {
            long long f = (k/3)*c+((k%3)/2)*b+((k%3)%2)*a;
            minn=min(minn,f);
            f=(k/2)*b+(k%2)*a;
            minn=min(minn,f);
            f=k*a;
            minn=min(minn,f);
        }
    }
    cout<<minn<<"\n";
    return 0;
}
