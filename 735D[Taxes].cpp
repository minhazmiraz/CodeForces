#include<bits/stdc++.h>
using namespace std;
#define debug cout<<"wrong\n"

bool isprime(long long n)
{
    bool prime = true;
    for(int i = 2; i*i <= n; i++)
    {
      if(n % i == 0)
        prime = false;
    }
    return prime;
}

int main()
{
    long long n;
    cin>>n;
    if(isprime(n))
    {
        cout<<"1\n";
    }
    else if(n%2==0)
    {
        cout<<"2\n";
    }
    else if(isprime(n-2))
    {
        cout<<"2\n";
    }
    else
        cout<<"3\n";
    return 0;
}
