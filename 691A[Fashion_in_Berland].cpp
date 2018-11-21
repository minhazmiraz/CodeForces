#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a==0)
            cnt++;
    }
    if(n==1&&cnt==0)
        cout<<"YES\n";
    else if(n!=1&&cnt==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
