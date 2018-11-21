#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,first,last,cost;
    cin>>n>>first>>last;
    char str[n+10];
    cin>>str;
    if(str[first - 1]!=str[last-1])
    {
        cout<<"1"<<"\n";
    }
    else
        cout<<"0"<<"\n";

    return 0;
}
