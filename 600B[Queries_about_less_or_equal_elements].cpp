#include<bits/stdc++.h>
using namespace std;
#define debug(x,y) cout<<x<<y
#define pb push_back
#define mp make_pair

int main() {
    int a,b;
    cin>>a>>b;
    vector< int > arr;
    int t;
    cin>>t;
    arr.pb(t);
    for(int i=1;i<a;i++){
        cin>>t;
        arr.pb(t);
    }

    sort(arr.begin(),arr.end());

    vector< int > ::iterator up;
    for(int i=0;i<b;i++){
        int n;
        cin>>n;
        up = upper_bound(arr.begin(),arr.end(),n);
        cout<<up-arr.begin();
        if(i!=b-1) cout<<" ";
    }

    return 0;
}

