#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==3)
        cout<<"2\n";
    else if(n==2)
        cout<<"1\n";
    else if(n==1)
        cout<<"1\n";
    else{
        for(long long i=n/2+1;i>=2;i--){
            if(i+(i-1)*2==n||i+(i-1)*2==n-1){
                cout<<i+i-1<<"\n";
                break;
            }
            else if(i+i*2==n){
                cout<<i+i<<"\n";
                break;
            }
        }
    }
    return 0;
}
