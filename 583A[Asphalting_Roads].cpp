#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row[55],col[55];
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    for(int i=1;i<=n*n;i++)
    {
        int h,v;
        cin>>h>>v;
        if(i!=1&&!row[h]&&!col[v]){
            cout<<" "<<i;
            row[h]=1;
            col[v]=1;
        }
        else if(i==1)
        {
            cout<<"1";
            row[h]=1;
            col[v]=1;
        }

    }
    cout<<"\n";
    return 0;
}
