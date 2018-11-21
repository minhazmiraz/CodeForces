#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+10];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int x;
    n%2==0?x=n/2-1:x=n/2;
    if(n!=2)
    {
        for(int i=0;i<=x;i++)
        {
            int temp;
            if(i%2==0){
                temp=arr[i];
                arr[i]=arr[n-1-i];
                arr[n-1-i]=temp;
            }
        }
    }
    else
    {
        int temp=arr[0];
        arr[0]=arr[1];
        arr[1]=temp;
    }
    cout<<arr[0];
    for(int i=1;i<n;i++)
        cout<<" "<<arr[i];
    cout<<"\n";
    return 0;
}
