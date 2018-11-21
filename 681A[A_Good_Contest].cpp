#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        int before,after;
        cin>>before>>after;
        if(before>=2400&&after>before)
            flag=1;
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
