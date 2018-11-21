#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    cin>>a;
    int sum=0;
    int m=(a-0),flag=1;
    if(m>15)
    {
        flag=0;
        sum+=15;
    }
    else
        sum=a;
    int b=a;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        m=a-b;
        if(flag)
        {
            if(m>15)
            {
                flag=0;
                sum=b+15;
            }
            else
            {
                sum=a;
            }
        }
        b=a;
    }
    if(flag)
    {
        if(sum+15>90)
            sum=90;
        else
            sum+=15;
    }
    cout<<sum<<"\n";
    return 0;
}
