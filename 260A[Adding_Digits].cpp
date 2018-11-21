#include <bits/stdc++.h>
using namespace std;
#define Test(x) long long x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int a,b,n;
	cin>>a>>b>>n;
	for(int i=0;i<10;i++){
		if((a*10+i)%b==0){
			cout<<a<<i;
			for(int j=1;j<n;j++){
				cout<<"0";
			}
			cout<<endl;
			return 0;
		}
	}
	cout<<"-1\n";
	return 0;
}