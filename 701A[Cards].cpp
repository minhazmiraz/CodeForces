#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    int temp=n/2,sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sum/=temp;

    //cout<<sum<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            //cout<<arr[i]+arr[j]<<"\n";
            if(arr[i]+arr[j]==sum)
            {
                cout<<i<<" "<<j<<"\n";
                arr[j]=-1;
                arr[i]=-1;
            }
        }
    }
    return 0;
}
