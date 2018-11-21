#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,cnt=0;
    cin>>a;
    string str;
    cin>>str;
    if(str[0]=='<')
    {
        for(int i=0;i<str.length();i++){
            if(str[i]=='>')
                {
                    break;
                }
            cnt++;
            }
    }
    if(str[a-1]=='>')
    {
        for(int i=a-1;i>=0;i--){
            if(str[i]=='<')
            {

                break;
            }
            cnt++;
            }
    }
    cout<<cnt<<"\n";
    return 0;
}
