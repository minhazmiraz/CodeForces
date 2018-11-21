#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d;
    cin>>n>>m;
    if((n<8&&n%2!=0)||(n>=8&&n%2==0))
        d=31;
    else if(n==2)
        d=28;
    else
        d=30;
    int days=7-m+1;
    int weeks=0;
    if((d-days)%7>0)
        weeks+=1;
    weeks+=(d-days)/7;
    cout<<weeks+1<<"\n";
    return 0;
}
