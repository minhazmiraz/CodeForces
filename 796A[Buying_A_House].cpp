#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y
#define NL printf("\n")
#define SP printf(" ")

int main(){
	int n,m,k,minn=1e7;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a!=0&&a<=k&&i!=m)
			minn=min(minn,abs(m-i)*10);
	}
	cout<<minn<<endl;
	return 0;
}