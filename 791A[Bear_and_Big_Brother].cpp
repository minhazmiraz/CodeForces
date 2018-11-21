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
    int a,b,cnt=0;
    cin>>a>>b;
    while(++cnt){
        a*=3;
        b*=2;
        if(a>b)
            break;
    }
    cout<<cnt<<"\n";
    return 0;
}
