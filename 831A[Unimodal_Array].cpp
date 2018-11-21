#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+5];
    int inc=0,dec=0,equ=0,flag=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int i=2;
    while(i<=n && arr[i]>arr[i-1]) i++;
    if(i>n){cout<<"YES\n"; return 0;}
    while(i<=n && arr[i]==arr[i-1]) i++;
    if(i>n) {cout<<"YES\n"; return 0;}
    while(i<=n && arr[i]<arr[i-1]) i++;
    if(i>n) {cout<<"YES\n"; return 0;}
    else{
        cout<<"NO\n";
    }
    return 0;
}
