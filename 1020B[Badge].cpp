#include <bits/stdc++.h>
using namespace std;
int p[1005];
bool vis[1005];
int path(int src){
    if(vis[src]) return src;
    vis[src]=1;
    return path(p[src]);
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    for(int i=1;i<=n;i++){
        memset(vis,0,sizeof vis);
        cout<<path(i)<<" ";
    }
    cout<<endl;
    return 0;
}
