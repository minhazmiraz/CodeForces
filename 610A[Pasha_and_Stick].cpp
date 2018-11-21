#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n%2)
        cout<<"0\n";
    else{
        long long temp = (n/2)-1;
        temp=temp-(n/4);
        cout<<temp<<"\n";
    }
    return 0;
}
