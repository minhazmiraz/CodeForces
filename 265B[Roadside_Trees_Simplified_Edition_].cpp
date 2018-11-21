#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int n,prev,sum=0;
	cin>>n;
	cin>>prev;
	sum+=(prev+1);
	for(int i=2;i<=n;i++){
		int a;
		cin>>a;
		if(a==prev) sum+=2;
		else sum+=(abs(prev-a))+2;
		prev=a;
	}
	cout<<sum<<endl;
    return 0;
}
