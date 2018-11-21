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

    int n,k;
    long long subsum=0,totsum=0;
    cin>>n>>k;
    int i,arr[n+10];
    for(i=1;i<=k;i++){
        int a;
        cin>>a;
        subsum+=a;
        arr[i]=a;
    }
    totsum+=subsum;
    for(int j=1;i<=n;i++,j++){
        int a;
        cin>>a;
        subsum-=arr[j];
        subsum+=a;
        totsum+=subsum;
        arr[i]=a;
    }
    double res = (double)totsum/(double)(n-k+1);
    printf("%.10lf\n",res);
    return 0;
}
