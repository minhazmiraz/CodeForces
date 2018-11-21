#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=1;
    long long a,b;
    cin>>a>>b;
    stack<long long>q;
    for(long long i=b;i>=a;)
    {
        if(i==a)
        {
            q.push(i);
            break;
        }
        else if((i-1)%10==0)
        {
            q.push(i);
            i=(i-1)/10;
        }
        else if(i%2==0)
        {
            q.push(i);
            i=(i/2);
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(!q.empty()&&q.top()!=a)
        flag=0;
    if(flag)
    {
        cout<<"YES\n";
        cout<<q.size()<<"\n";
        cout<<q.top();
        q.pop();
        while(!q.empty())
        {
            cout<<" "<<q.top();
            q.pop();
        }
    }
    else
        cout<<"NO\n";
    return 0;
}
