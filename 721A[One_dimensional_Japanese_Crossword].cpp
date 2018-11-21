#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vc;
    int cnt=0,n;
    cin>>n;
    getchar();
    char ch;
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='\n')
            break;
        if(ch=='B')
            cnt++;
        else if(cnt!=0&&ch=='W'){
            vc.push_back(cnt);
            cnt=0;
        }
    }
    if(cnt!=0)
        vc.push_back(cnt);
    cout<<vc.size()<<"\n";
    if(!vc.empty())
    {
        cout<<vc[0];
        for(int i=1;i<vc.size();i++)
            cout<<" "<<vc[i];
        cout<<"\n";
    }
    return 0;
}
