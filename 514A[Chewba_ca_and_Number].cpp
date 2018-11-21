#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	long long a;
	string ans="";
	cin>>a;
	while(a){
		int tmp=a%10;
		if((9-tmp)<tmp) ans+=(9-tmp)+'0';
		else ans+=(tmp+'0');
		a/=10;
	}
	reverse(ans.begin(), ans.end());
	if(ans[0]=='0') ans[0]='9';
	cout<<ans<<endl;
    return 0;
}
