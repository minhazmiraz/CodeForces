#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,cnt=0,maxx=0,minn=10e9+5;
    cin>>n;
    long long arr[n+5];
    for(long long i=1;i<=n;i++)
    {
        long long a;
        cin>>a;
        arr[i]=a;
        maxx=max(maxx,a);
        minn=min(minn,a);
    }
    //cout<<maxx<<" "<<minn<<endl;
    for(long long i=1;i<=n;i++)
    {
        if(arr[i]<maxx&&arr[i]>minn){
            cnt++;
            //cout<<arr[i]<<endl;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
