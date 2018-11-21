#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y
#define NL printf("\n")
#define SP printf(" ")
#define mset(x,y) memset(x,y,sizeof(x))
#define mset2d(x,y,m,n) memset(x,y,sizeof(x[0][0]*m*n))

int main(){
    int n;
    cin>>n;
    int maxx=0,table=0,arr[n+5];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=2*n;i++){
        int a;
        cin>>a;
        if(arr[a]==1){
            arr[a]=0;
            table--;
        }
        else if(arr[a]==0){
            arr[a]=1;
            table++;
            maxx=max(maxx,table);
        }
    }
    maxx=max(maxx,table);
    cout<<maxx<<"\n";
    return 0;
}
