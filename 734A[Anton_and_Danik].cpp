#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t,a=0,d=0;
    char arr;
    cin>>t;
    while(t--)
    {
        cin>>arr;
        if(arr=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton"<<"\n";
    else if(a<d)
        cout<<"Danik"<<"\n";
    else if(a==d)
        cout<<"Friendship"<<"\n";
    return 0;
}
