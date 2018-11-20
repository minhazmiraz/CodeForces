#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    for(int i=1;i<=k;i++){
        long long ta,fa,tb,fb;
        cin>>ta>>fa>>tb>>fb;
        long long ans=0;
        if(ta!=tb){
            if(fa>=a && fa<=b){
                ans+=abs(ta-tb);
            } else{
                if(abs(a-fa)<=abs(b-fa)){
                    ans+=abs(a-fa);
                    fa=a;
                } else{
                    ans+=abs(b-fa);
                    fa=b;
                }
                ans+=abs(ta-tb);
            }
        }
        ans+=abs(fa-fb);
        cout<<ans<<endl;
    }
    return 0;
}
