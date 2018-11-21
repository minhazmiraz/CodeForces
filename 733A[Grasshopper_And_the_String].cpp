#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr;
    int tcase=0,temp=0,maxx=0;
    while(++tcase)
    {
        arr=getchar();
        if(arr=='\n')
            break;
        if(arr=='A'||
           arr=='E'||
           arr=='I'||
           arr=='O'||
           arr=='U'||
           arr=='Y')
        {
            maxx=max(tcase-temp,maxx);
            temp=tcase;
        }
    }
    maxx=max(tcase-temp,maxx);
    cout<<maxx<<"\n";
    return 0;
}
