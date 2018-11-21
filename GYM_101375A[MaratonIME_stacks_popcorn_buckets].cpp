#include<bits/stdc++.h>
using namespace std;
#define debug(x,y) cout<<x<<y
#define pb push_back
#define mp make_pair
#define unsigned long long ull

int main() {


    long long n;
    cin>>n;
    long long temp = (n*(n+1))/2;
    cout<<temp-(n-1)<<endl;

    return 0;
}