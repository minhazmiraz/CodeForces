#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,cnt=0,maxx=0;
    cin>>n>>d;
    for(int i=1;i<=d;i++)
    {
        string str;
        cin>>str;
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(str[j]=='0')
                flag=1;
        }
        if(flag)
            cnt++;
        else
        {
            maxx=max(cnt,maxx);
            cnt=0;
        }
    }
    maxx=max(cnt,maxx);
    cout<<maxx<<"\n";
    return 0;
}
