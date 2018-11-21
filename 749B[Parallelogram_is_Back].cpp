#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<"3\n";
    cout<<x3+x1-x2<<" "<<y3+y1-y2<<"\n";
    cout<<x3+x2-x1<<" "<<y3+y2-y1<<"\n";
    cout<<x2+x1-x3<<" "<<y2+y1-y3<<"\n";
    return 0;
}
