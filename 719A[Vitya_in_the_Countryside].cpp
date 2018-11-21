#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=-1,a,b;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(i!=1&&i==n&&a<b)
            flag=1;
        else if(i!=1&&i==n&&a>b)
            flag=2;
        if(i==n&&a==15)
            flag=1;
        else if(i==n&&a==0)
            flag=2;
        b=a;
    }
    if(flag==-1)
        cout<<"-1\n";
    else if(flag==1)
        cout<<"DOWN\n";
    else if(flag==2)
        cout<<"UP\n";
    return 0;
}
