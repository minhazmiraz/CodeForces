#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxx=0,cnt=1;
    int a;
    cin>>a;
    int b=a;
    for(int i=2;i<=n;i++)
    {
        cin>>a;
        if(a<b)
        {
            maxx=max(maxx,cnt);
            cnt=1;
        }
        else
            cnt++;
        b=a;
    }
    maxx=max(maxx,cnt);
    cout<<maxx<<"\n";

    return 0;
}
