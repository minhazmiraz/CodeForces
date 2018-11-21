#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,oflag=0,eflag=0,odd,even;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            eflag++;
            even=i;
        }
        else{
            oflag++;
            odd=i;
        }
    }

    if(eflag>oflag)
        cout<<odd<<"\n";
    else
        cout<<even<<"\n";
    return 0;
}
