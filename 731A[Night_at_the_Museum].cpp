#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int temp='a',res=0;
    for(int i=0;i<str.length();i++)
    {
        int a=abs(temp-str[i]);
        //cout<<a<<" ";
        if(26-a<a)
            a=26-a;
        res+=a;
        //cout<<a<<" ";
        temp=str[i];
    }
    cout<<res<<"\n";
    return 0;
}
