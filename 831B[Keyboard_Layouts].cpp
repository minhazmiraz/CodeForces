#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    map<char,char> mp;
    for(int i=0;i<str1.length();i++){
        mp[tolower(str1[i])]=(char)tolower(str2[i]);
    }
    string text;
    cin>>text;
    for(int i=0;i<text.length();i++){
        char ch=text[i];
        if(isalpha(ch)){
            if(islower(ch)){
                cout<<(char)mp[tolower(ch)];
            } else{
                cout<<(char)toupper(mp[tolower(ch)]);
            }
        } else{
            cout<<ch;
        }
    }
    cout<<endl;
}
