#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str[0]=='a'&&(str[1]=='1'||str[1]=='8'))
        cout<<"3\n";
    else if(str[0]=='h'&&(str[1]=='1'||str[1]=='8'))
        cout<<"3\n";
    else if(str[0]=='a'||str[0]=='h'||str[1]=='1'||str[1]=='8')
        cout<<"5\n";
    else
        cout<<"8\n";
    return 0;
}
