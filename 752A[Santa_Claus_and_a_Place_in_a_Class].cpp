#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int temp=(r+1)/2;
    int lane = temp/m;
    int desk = temp%m;
    char side = temp*2==r?'R':'L';
    if(!desk)
        cout<<lane<<" "<<m<<" "<<side<<"\n";
    else
        cout<<lane+1<<" "<<desk<<" "<<side<<"\n";
    return 0;
}
