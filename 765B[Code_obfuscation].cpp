#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int arr[30],flag=1;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<str.length();i++)
    {
        if(arr[str[i]-97]!='a'&&arr[str[i]-97-1]==0){
                flag=0;
                break;
        }
        arr[str[i]-97]++;
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
