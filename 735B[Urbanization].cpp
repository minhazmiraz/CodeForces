#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,n2;
    cin>>n>>n1>>n2;
    double a[n+1],res=0.0,sum=0.0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int temp = n-(n1+n2);
    if(n1<n2)
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    for(int i=0;i<n1;i++)
        sum+=a[temp+i];
    res=sum/(double)n1;
    sum=0;
    for(int i=temp+n1;i<n;i++)
        sum+=a[i];
    res+=(sum/(double)n2);
    cout<<fixed;
    cout<<setprecision(8)<<res<<"\n";
    return 0;
}
