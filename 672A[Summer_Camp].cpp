#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=9)
        cout<<n<<"\n";
    else if(n>9&&n<190)
    {
        int temp=(n-9+1)/2;
        temp+=9;
        if(!(n%2))
            cout<<(temp/10)%10<<"\n";
        else
            cout<<temp%10<<"\n";
    }
    else if(n>=190)
    {
        int temp=(n-189+2)/3;
        temp+=99;
        //cout<<temp<<endl;
        if(n%3==0)
            cout<<(temp%10)<<"\n";
        else if(n%3==1)
            cout<<(temp/100)%10<<"\n";
        else
            cout<<(temp/10)%10<<"\n";
    }
    return 0;
}
