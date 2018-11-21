#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[110];
    memset(arr,0,sizeof(arr));
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        long long maxx=0,ind=1;
        for(int j=1;j<=n;j++)
        {
            int a;
            cin>>a;
            if(maxx<a)
            {
                maxx=a;
                ind=j;
            }
        }
        arr[ind]++;
    }
    int maxx=0,ind=1;
    for(int i=1;i<=n;i++)
    {
        if(maxx<arr[i])
        {
            maxx=arr[i];
            ind=i;
        }
    }
    cout<<ind<<"\n";
    return 0;
}
