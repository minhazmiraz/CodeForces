#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	Test(n);
	int sum = 0;
	for(int i=1;i<=n;i++){
		Test(a);
		sum+=a;
	}
	int temp = sum,cnt=0;
	for(int i=1;i<=5;i++){
		temp++;
		if(temp%(n+1)!=1)
			cnt++;
	}
	cout<<cnt<<endl;
    return 0;
}
