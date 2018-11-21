#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=-1,h=-1,cnt=1,maxx=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int ho,mi;
        cin>>ho>>mi;
        if(h!=ho||m!=mi)
        {
            maxx=max(cnt,maxx);
            h=ho;m=mi;cnt=1;
        }
        else
            cnt++;
    }
    maxx=max(cnt,maxx);
    cout<<maxx<<"\n";
    return 0;
}
