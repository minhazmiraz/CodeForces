#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.length(),i,j=1,k,flag=0;
    for(i=0,j=1,k=1;k<len;)
    {
        if(str.substr(i,j)==str.substr(k,j))
        {
            k=k+j;
            flag=1;
        }
        else
        {
            j++;
            k=j;
            flag=0;
        }
        //cout<<flag<<endl;
    }
    if(flag)
        cout<<j<<"\n";
    else
        cout<<len<<"\n";
    return 0;
}
