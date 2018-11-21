#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a+10];
    for(int i=0;i<a;i++)
        cin>>arr[i];
    sort(arr,arr+a);
    int sum=0,cnt=0;
    for(int i=a-1;i>=0;i--)
    {
        sum+=arr[i];
        cnt++;
        if(sum>=b)
            break;
    }
    cout<<cnt<<"\n";
    return 0;
}
