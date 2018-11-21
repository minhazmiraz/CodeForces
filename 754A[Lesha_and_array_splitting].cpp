#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+10],csum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        csum+=arr[i];
    }
    if(!csum)
    {
        int flag = 0;
        for(int i=n-1;i>=0;i--)
        {
            //cout<<csum<<" "<<arr[i]<<endl;
            if(csum-arr[i]!=0&&arr[i]!=0)
            {
                flag=i;
                break;
            }
        }
        if(!flag)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            cout<<"2\n";
            cout<<"1 "<<flag<<"\n";
            cout<<flag+1<<" "<<n<<"\n";
        }
    }
    else
    {
        cout<<"YES\n";
        cout<<"1\n";
        cout<<"1 "<<n<<"\n";
    }
    return 0;
}
