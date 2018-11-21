#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+10];
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        arr[a]=i;
    }
    cout<<arr[1];
    for(int i=2;i<=n;i++)
        cout<<" "<<arr[i];
        cout<<"\n";
    return 0;
}
