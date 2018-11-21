#include <bits/stdc++.h>
using namespace std;
#define debug(x,y) cout<<x<<y
#define pb push_back
#define mp make_pair
#define Test(x) int x;cin>>x
#define mem(x,val) memset((x),(val),sizeof(x));
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))


int main(){
	int n,m;
	cin>>n>>m;
	vector< int > arr;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		arr.pb(a);
	}

	set< int > st;
	int pos[n+10];
	for(int i=n;i>0;i--){
		st.insert(arr[sz(arr)-1]);
		arr.pop_back();
		pos[i]=st.size();
	}


	for(int i=1;i<=m;i++){
		int a;
		cin>>a;
		cout<<pos[a]<<endl;
	}
	return 0;
}