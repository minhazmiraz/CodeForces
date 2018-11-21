#include<bits/stdc++.h>
using namespace std;
#define debug(x,y) cout<<x<<y
#define pb push_back
#define mp make_pair
#define long long ll
#define unsigned long long ull

int main() {

    int n,t;
    cin>>n>>t;
    if(t==10){
        if(n==1)
            cout<<"-1";
        else{
            cout<<"1";
            for(int i=2;i<=n;i++){
                cout<<"0";
            }

        }
        cout<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        cout<<t;
    }
    cout<<endl;

    return 0;
}

