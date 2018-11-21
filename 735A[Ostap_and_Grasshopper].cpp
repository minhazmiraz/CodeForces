#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,Tpos,Gpos,flag=0;
    cin>>n>>k;
    char line[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>line[i];
        if(line[i]=='G')
            Gpos=i;
        if(line[i]=='T')
            Tpos=i;
    }
    if(Gpos<Tpos)
    {
        for(int i=Gpos;i<=Tpos;i+=k)
            if(i==Tpos)
                flag=1;
            else if(line[i]=='#')
            {
                flag=0;
                break;
            }
    }
    if(Gpos>Tpos)
    {
        for(int i=Gpos;i>=Tpos;i-=k)
            if(i==Tpos)
                flag=1;
            else if(line[i]=='#')
            {
                flag=0;
                break;
            }
    }
    if(flag==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
