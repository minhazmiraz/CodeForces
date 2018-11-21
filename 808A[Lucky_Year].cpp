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
    long long n;
    cin>>n;
    if(n<10){
        cout<<"1\n";
        return 0;
    }
    for(long long i=10;;i*=10){
        for(long long j=1;j<=9;j++){
            long long mul=j*i;
            if(mul>n){
                cout<<mul-n<<endl;
                return 0;
            }
        }
    }
    return 0;
}
