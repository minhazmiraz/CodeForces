#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res=0;
        for(int i=a;i>0;i--)
        {
            if(i*2<=b&&i*4<=c)
            {
                res=i+(i*2)+(i*4);
                break;
            }
        }
        cout<<res<<"\n";
    return 0;
}
