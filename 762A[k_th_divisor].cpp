#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,cnt=0,cntp=0;
	cin>>n>>k;
	vector<long long>vc;
	vector<long long>v;
	if(n==1)
    {
        vc.push_back(1);
    }
    else
    {
        for (long long i = 1; i*i <= n; i++)
        {
            if(n%i==0)
            {
                vc.push_back(i);
                if(i!=(n/i))
                    v.push_back(n/i);
            }
        }
        vc.reserve(vc.size()+v.size());
        reverse(v.begin(),v.end());
        vc.insert(vc.end(),v.begin(),v.end());
        v.clear();
    }
	if(k>vc.size())
        cout<<"-1\n";
    else
        cout<<vc[k-1]<<"\n";
	return 0;
}
