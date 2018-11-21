#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int maxx=max(a,b);
    int minn=min(a,b);
    cout<<minn<<" "<<(int)(maxx-minn)/2<<"\n";
    return 0;
}
