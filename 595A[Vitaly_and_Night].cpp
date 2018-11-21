#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int flag=1;
            for(int k=1;k<=2;k++)
            {
                cin>>l;
                if(l&&flag)
                {
                    cnt++;
                    flag=0;
                }
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
