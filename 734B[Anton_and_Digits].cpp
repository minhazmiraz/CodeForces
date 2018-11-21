#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int k1,k2,k3,k4,sum=0;
    cin>>k1>>k2>>k3>>k4;
    while(k1&&k3&&k4)
    {
        sum+=256;
        k1--;
        k3--;
        k4--;
    }
    while(k1&&k2)
    {
        sum+=32;
        k1--;k2--;
    }
    cout<<sum<<"\n";
    return 0;
}
