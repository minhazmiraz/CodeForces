#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    cin>>n;
    getchar();
    string str[n+5];
    for(int i=0;i<n;i++)
        getline(cin,str[i]);
    for(int i=0;i<n;i++){
        if(!flag){
            for(int j=1;j<str[i].length();j++){
                char ch='+';
                if(str[i][j]=='O'&&str[i][j-1]=='O'){
                    str[i][j]=ch;
                    str[i][j-1]=ch;
                    flag=1;
                    break;
                }
            }
        }
        else
            break;
    }
    if(flag){
        cout<<"YES\n";
        for(int i=0;i<n;i++)
            cout<<str[i]<<"\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
