#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[110],a,sum=0;
    memset(arr,0,sizeof(arr));
    cin>>a;
    arr[a]++;
    sum+=a;
    while(getchar()!='\n')
    {
        cin>>a;
        arr[a]++;
        sum+=a;

    }
    //cout<<sum<<endl;
    int minn=sum;
    for(int i=100;i>0;i--)
    {
        if(arr[i]==2)
        {
            //cout<<i<<endl;
            int temp=sum-i*2;
            //cout<<temp<<endl;
            minn=min(temp,minn);
        }
        else if(arr[i]>2)
        {
            int temp=sum-i*3;
            minn=min(temp,minn);
        }
    }
    cout<<minn<<"\n";
    return 0;
}
