#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            char ch;
            cin>>ch;
            if(ch!='B'&&ch!='W'&&ch!='G')
                flag=1;
        }
    }
    if(flag)
        cout<<"#Color\n";
    else
        cout<<"#Black&White\n";
    return 0;
}
