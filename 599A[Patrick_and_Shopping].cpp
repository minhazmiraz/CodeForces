#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long d1,d2,d3;
    cin>>d1>>d2>>d3;
    cout<<min(2*(d1+d2),min(2*(d2+d3),min(2*(d1+d3),d1+d2+d3)))<<"\n";
    return 0;
}