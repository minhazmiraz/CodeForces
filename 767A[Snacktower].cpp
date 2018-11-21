#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y

int main(){
    int n;
    cin>>n;
    int vis[n+5];
    memset(vis,0,sizeof(vis));
    for(int i=1,j=n;i<=n&&j>0;i++){
        int a;
        cin>>a;
        vis[a]=1;
        if(vis[j]){
            cout<<j;
            while(vis[--j]) cout<<" "<<j;
        }
        cout<<"\n";
    }
    return 0;
}
