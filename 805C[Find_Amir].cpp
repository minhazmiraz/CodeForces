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
    if(n%2==0)
        cout<<(n/2)-1<<"\n";
    else
        cout<<floor(n/2)<<"\n";
    return 0;
}
