#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	long long n,m;
	cin>>n>>m;
	long long tmp=n-m;
	long long minn, maxx=(tmp*(tmp+1))/2;
	if(m==1){
		cout<<maxx<<" "<<maxx<<endl;
		return 0;
	}
    tmp=0; minn=0;
    if(n%m!=0){
    	tmp=n/m;
    	minn+=(n%m)*((tmp*(tmp+1))/2);
    	minn+=(m-(n%m))*((tmp*(tmp-1))/2);
	} else{
		tmp=n/m;
		minn+=m*((tmp*(tmp-1))/2);
    }
    cout<<minn<<" "<<maxx<<endl;
    return 0;
}
