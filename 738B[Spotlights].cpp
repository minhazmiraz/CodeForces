#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int arr[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&arr[i][j]);
        int cnt=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                {
                    for(int k=i-1;k>=0;k--)
                    {
                        if(arr[k][j]==0)
                            cnt++;
                        else if(arr[k][j]==1)
                            break;
                    }

                    for(int k=i+1;k<n;k++)
                    {
                        if(arr[k][j]==0)
                            cnt++;
                        else if(arr[k][j]==1)
                            break;
                    }
                    for(int k=j-1;k>=0;k--)
                    {
                        if(arr[i][k]==0)
                            cnt++;
                        else if(arr[i][k]==1)
                            break;
                    }
                    for(int k=j+1;k<m;k++)
                    {
                        if(arr[i][k]==0)
                            cnt++;
                        else if(arr[i][k]==1)
                            break;
                    }
                }
            }
        cout<<cnt<<"\n";
    }
    return 0;
}
