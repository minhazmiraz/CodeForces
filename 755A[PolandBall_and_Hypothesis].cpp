#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int cnt=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
            cnt++;
    }
    if(cnt==1)
        return true;
    else
        return false;
}

int main()
{
    int n,flag;
    cin>>n;
    for(int i=1;i<=1000;i++)
    {
        if(!isPrime(n*i+1))
        {
            flag=i;
            break;
        }
    }
    cout<<flag<<"\n";
    return 0;
}
