#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int minu = 240-m;
    int sum=0,cnt=0;
    for(int i=1;i<=n;i++)
    {
        sum+=5*i;
        if(sum>minu)
        {
            sum-=5*i;
            break;
        }
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
