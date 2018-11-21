#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+5][n+5];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    int vis[100005],flag=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]!=1){
                    int f=0;
                for(int k=1;k<=n;k++){
                    for(int l=1;l<=n;l++){
                        if(arr[i][k]+arr[l][j]==arr[i][j]){
                            f=1;
                            break;
                        }
                    }
                    if(f)
                        break;
                }
                if(!f){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0)
            break;
    }

    if(flag){
        cout<<"Yes\n";
    } else{
        cout<<"No\n";
    }
    return 0;
}
