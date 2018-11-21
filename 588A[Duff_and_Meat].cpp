#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp;
    int a,b;
    cin>>a>>b;
    int res=a*b;
    temp=b;
    for(int i=2;i<=n;i++)
    {
        cin>>a>>b;
        if(b>temp)
            res+=a*temp;
        else
        {
            res+=a*b;
            temp=b;
        }
    }
    cout<<res<<"\n";
    return 0;
}
