#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,flag=1;
    cin>>n>>k;
    int temp,check,arr=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(i>k&&a!=temp)
            flag=0;
        if(i<=k&&arr!=a)
        {
            check=i;
            arr=a;
        }
        temp=a;
    }
    if(flag)
        cout<<check-1<<"\n";
    else
        cout<<"-1\n";
    return 0;
}
