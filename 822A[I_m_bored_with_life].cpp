#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b;
cin>>a>>b;
long long ans=1;
for(long long i=min(a,b);i>0;i--){
ans*=i;
}
cout<<ans<<endl;
return 0;
}