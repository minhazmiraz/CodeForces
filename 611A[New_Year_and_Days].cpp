#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string str;
    getline(cin,str);
    if(str[4]=='w'){
        if(x==6||x==5)
            cout<<"53\n";
        else
            cout<<"52\n";
    }
    if(str[4]=='m'){
        if(x==31)
            cout<<"7\n";
        else if(x==30)
            cout<<"11\n";
        else
            cout<<"12\n";
    }
    return 0;
}
