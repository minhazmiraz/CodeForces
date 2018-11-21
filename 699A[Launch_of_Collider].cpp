#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,minn=10e15;
    cin>>n;

    string str;
    cin>>str;

    long long a;
    cin>>a;
    long long b = a,temp=-1;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        if(str[i]=='L'&&str[i-1]=='R'&&(a-b)%2==0)
        {
            temp=(a-b)/2;
            minn=min(temp,minn);
        }
        b=a;
    }
    minn=min(temp,minn);

    cout<<minn<<"\n";
    return 0;
}
