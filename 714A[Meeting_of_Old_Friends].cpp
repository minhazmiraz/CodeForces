#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x1,y1,x2,y2,k,time=0;
    cin>>x1>>y1>>x2>>y2>>k;
    if(x2<=y1&&y2<=y1&&x2>=x1&&y2>=x1)
    {
        time=y2-x2+1;
        if(k>=x2&&k<=y2)
            time=time-1;
    }
    else if(x2<=y1&&x2>=x1&&y2>y1)
    {
        time=y1-x2+1;
        if(k>=x2&&k<=y1)
            time=time-1;
    }
    else if(x2<x1&&y2<=y1&&y2>=x1)
    {
        time=y2-x1+1;
        if(k>=x1&&k<=y2)
            time=time-1;
    }
    else if(x2<x1&&y2>y1)
    {
        time=y1-x1+1;
        if(k>=x1&&k<=y1)
            time=time-1;
    }
    cout<<time<<"\n";
    return 0;
}
