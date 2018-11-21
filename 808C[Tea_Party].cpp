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
    int n,w;
    cin>>n>>w;
    set< pair< int,int > > q;
    int arr[n+10];
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        q.insert({-a,i});
        arr[i]=ceil(a/2.0);
        w-=arr[i];
    }
    //cout<<w<<endl;
    if(w<0){
        cout<<"-1\n";
        return 0;
    }
    while(w>0){
        int frst = (-1)*(q.begin()->first);
        int sec = q.begin()->second;
        int temp = frst-arr[sec];
        //cout<<frst<<" "<<sec<<endl;
        if(w>=temp){
            //int t = w-temp;
            w-=temp;
            arr[sec]+=temp;
        } else{
            arr[sec]+=w;
            w=0;
        }
        q.erase(q.begin());
    }
    cout<<arr[1];
    for(int i=2;i<=n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    return 0;
}
