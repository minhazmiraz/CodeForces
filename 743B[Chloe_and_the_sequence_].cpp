#include<bits/stdc++.h>
using namespace std;
#define debug cout<<n<<endl;

long long PowerOf2(long long n)
{
    return (long long)pow(2, floor(log(n) / log(2)));
}

int main()
{
    long long n,k;
    cin>>n>>k;
    n = PowerOf2(k);
    if(k==n)
    {
        cout<<floor(log(k)/log(2))+1<<"\n";
        return 0;
    }
    else
        k=k-n;
    while(k>=1000)
    {
        n = PowerOf2(k);
        if(k==n)
        {
            cout<<floor(log(k)/log(2))+1<<"\n";
            return 0;
        }
        else
            k=k-n;
    }
    vector <long long> str;
    str.push_back(1);
    for(long long i=1,j=2; i<=k; j++)
    {
        str.push_back(j);
        str.insert( str.end(), str.begin(), str.end() );
        str.pop_back();
        i=str.size();
    }
    cout<<str[k-1]<<"\n";
    return 0;
}
