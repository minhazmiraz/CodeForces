#include<bits/stdc++.h>
using namespace std;

int main(){

    int c,v0,v1,a,l;
    cin>>c>>v0>>v1>>a>>l;
    int i=1,j=v0,sum=v0;
    while(sum<c){
        j=(v0+(i*a));
        if(j>v1){
            sum+=v1-l;
        } else{
            sum+=j-l;
        }
        i++;
        //cout<<sum<<endl;
    }
    cout<<i<<endl;
    return 0;
}
