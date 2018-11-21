#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["monday"]=1;
    mp["tuesday"]=2;
    mp["wednesday"]=3;
    mp["thursday"]=4;
    mp["friday"]=5;
    mp["saturday"]=6;
    mp["sunday"]=7;
    string str1,str2;
    cin>>str1>>str2;
    int temp=(mp[str1]-mp[str2]);
    if(temp==0||temp==-2||temp==-3||temp==5||temp==4)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
