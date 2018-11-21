#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double a;
    cin>>n>>a;
    //double each = ((n-2)*180.0)/n;
    double part = 180.0/n;
    double minn=180.0;
    int i=1, ans=0;
    for(int j=n;j>=3;j--,i++){
        double temp = i*part;
        if(abs(a-temp)<minn){
            minn=abs(a-temp);
            ans=j;
        }
    }
    cout<<"1 2 "<<ans<<endl;
    return 0;
}
