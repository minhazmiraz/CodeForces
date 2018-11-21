#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+10],maxx=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        maxx=max(maxx,arr[i]);
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(maxx-arr[i]);
    }
    cout<<sum<<"\n";
    return 0;
}
