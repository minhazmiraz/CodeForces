#include<bits/stdc++.h>
using namespace std;
int main(){

    long long n, k;
    cin>>n>>k;
    long long temp=n/2;
    if(temp<k){
        cout<<"0 0 "<<n<<endl;
        return 0;
    }
    long long x = temp/(k+1);
    cout<<x<<" "<<x*k<<" "<<n-(x+(x*k))<<endl;
    return 0;
}
