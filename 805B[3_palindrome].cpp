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
    if(n==1){
        cout<<"b\n";
        return 0;
    }


    char str[n+10];
    str[0]='b';
    str[1]='b';
    int i;
    for(i=2;i<n;i++){
        if(str[i-2]=='b')
            str[i]='a';
        else
            str[i]='b';
    }
    str[i]='\0';
    cout<<str<<endl;
    return 0;
}
