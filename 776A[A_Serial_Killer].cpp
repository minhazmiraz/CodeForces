#include<bits/stdc++.h>
using namespace std;
#define debug(x,y) cout<<x<<y
#define pb push_back
#define mp make_pair
#define long long ll
#define unsigned long long ull

int main() {

    string first1,first2;
    cin>>first1>>first2;
    cout<<first1<<" "<<first2<<"\n";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string str1,str2;
        cin>>str1>>str2;
        //cout<<str1<<" "<<str2<<" "<<first1<<" "<<first2<<"\n";
        if(str1==first1){
            cout<<str2<<" "<<first2<<"\n";
            first1.clear();
            first1=str2;
        }else if(str1==first2){
            cout<<first1<<" "<<str2<<"\n";
            first2.clear();
            first2=str2;
        }
    }

    return 0;
}

