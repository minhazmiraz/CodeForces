#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long temp,n,s,x,flag;
    cin>>n>>s>>x;
    temp=n%s;
    //cout<<n%s<<" "<<x%s<<endl;
    if(x!=n+1&&x>=n&&(x%s==temp||x%s==temp+1))
        flag=1;
    else if(x!=n+1&&x>=n&&(x%s==0&&(x-1)%s==temp))
        flag=1;
    else
        flag=0;
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
