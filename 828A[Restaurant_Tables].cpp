#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int one=a,two=b,onetwo=0,denies=0;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        if(t==1){
            if(one>0){
                one--;
            } else if(two>0){
                two--;
                onetwo++;
            } else if(onetwo>0){
                onetwo--;
            } else{
                denies+=t;
            }
        } else{
            if(two>0){
                two--;
            } else{
                denies+=t;
            }
        }
    }

    cout<<denies<<endl;
    return 0;
}
