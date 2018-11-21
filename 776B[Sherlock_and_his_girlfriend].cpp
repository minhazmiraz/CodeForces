#include<bits/stdc++.h>
using namespace std;
#define debug(x,y) cout<<x<<y
#define pb push_back
#define mp make_pair
#define long long ll
#define unsigned long long ull



void pri(int n)
{
    int prime[n+5];
    memset(prime,-1,sizeof(prime));
    prime[0]=0;
    prime[1]=0;

    cout<<"1";
    for(int i=2;i<=n;i++){
        //cout<<prime[3]<<endl;
        if(prime[i]==-1){
            if(i!=2) cout<<" 1";
            for(int j=2;i*j<=n;j++){
                prime[i*j]=0;
            }
        }
        else
            cout<<" 2";
    }
    cout<<"\n";
}



int main() {

    int n;
    cin>>n;
    if(n<=2) cout<<"1\n";
    else cout<<"2\n";
    pri(n+1);
    return 0;
}

