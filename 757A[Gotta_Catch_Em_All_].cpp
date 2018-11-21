#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int cnt[128]={0};
    for(int i=0;i<str.length();i++)
    {
        cnt[str[i]]++;
    }
    cnt[97]/=2;
    cnt[117]/=2;
    int minn=0;
    minn=min(cnt[66],min(cnt[117],min(cnt[108],min(cnt[98],min(cnt[97],min(cnt[115],cnt[114]))))));
    cout<<minn<<"\n";
    return 0;
}
