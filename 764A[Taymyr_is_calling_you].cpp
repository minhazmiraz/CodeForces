#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,z,cnt=0;
    cin>>m>>n>>z;
    for(int i=1;i<=z;i++)
    {
        if(i%m==0&&i%n==0)
            cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
