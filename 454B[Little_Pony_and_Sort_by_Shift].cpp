#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int n,prev;
	cin>>n;
	int inc=0,dec=0,start;
	cin>>start;
	prev=start;
	for(int i=2;i<=n;i++){
		int a;
		cin>>a;
		if(prev>a) dec++, inc=1;
		if(prev<=a) inc++;
		prev=a;
	}
	if(prev>start && dec) dec++, inc=1;
	if(dec==0) cout<<"0\n";
	else if(dec==1) cout<<inc<<endl;
	else cout<<"-1\n";
    return 0;
}
