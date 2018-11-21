#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        char str[n];
        char ch = getchar();
        gets(str);
        for(int i=0;i<n;)
        {
            int j,cnt=0;
            if(str[i]=='o'&&str[i+1]=='g'&&str[i+2]=='o')
            {
                cnt+=3;
                i+=3;
                while(1)
                {
                    if(str[i]=='g'&&str[i+1]=='o')
                    {
                        cnt+=2;
                        i+=2;
                    }
                    else
                        break;
                }
                cout<<"***";
            }
            else
            {
                cout<<str[i];
                i++;
            }
        }
        cout<<"\n";

    }
    return 0;
}
