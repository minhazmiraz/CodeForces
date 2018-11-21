#include<Bits/stdc++.h>
using namespace std;
int main()
{
    double minn=1e10,n,x1,y1,x2,y2,v;
    cin>>x1>>y1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x2>>y2>>v;
        double temp=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        temp=temp/v;
        minn=min(minn,temp);
    }
    printf("%0.20lf",minn);
    return 0;
}
