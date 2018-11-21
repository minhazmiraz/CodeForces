#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n==24)
    {

        if(str[0]>'2'||(str[0]=='2'&&str[1]>'3'))
        {
            char ch = '0';
            str[0]=ch;
        }
    }
    else if(n==12)
    {
        if(str[0]>'1')
        {
            char ch;
            ch=str[1]=='0'?'1':'0';
            str[0]=ch;
        }
        else if(str[0]=='1'&&str[1]>'2')
        {
            char ch = '0';
            str[1]=ch;
        }
        else if(str[0]=='0'&&str[1]=='0')
        {
            char ch = '1';
            str[1]=ch;
        }
    }

    if(str[3]>'5')
    {
        char ch = '0';
        str[3]=ch;
    }
    cout<<str<<"\n";
    return 0;
}
