#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str1, str2;
 cin>>str1>>str2;
 if(str1!=str2)
{
 if(str1.length()>=str2.length())
 cout<<str1.length()<<"\n";
 else
cout<<str2.length()<<"\n";}
 else
cout<<"-1\n";
return 0;
}