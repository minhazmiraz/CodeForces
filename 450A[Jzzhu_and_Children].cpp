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
	Test(m);
	int pos=n, q=0;
	for(int i=1;i<=n;i++){
		Test(a);
		if(a>m){
			int temp=(a/m);
			if(a%m) temp++;
			if(temp>=q){
				q=temp;
				pos=i;
			}
		}
	}

	cout<<pos<<endl;
    return 0;
}
