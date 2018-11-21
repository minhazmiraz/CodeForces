#include<bits/stdc++.h>
using namespace std;
int bigMode(int a, int b, int m){
    if(b==0) return 1%m;
    int x = bigMode(a, b/2, m);
    x = (x*x)%m;
    if(b&1)
        x = (x*a)%m;

    return x;
}
int main()
{
    long long n;
    cin>>n;
    long long mul=0;
    mul = bigMode(1378, n, 10);
    cout<<mul<<"\n";
    return 0;
}
