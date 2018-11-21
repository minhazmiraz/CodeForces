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
	int n,m,d;
	vector< int > arr;
	cin>>n>>m>>d;
	int flag=1,a;
	cin>>a;
	arr.pb(a);
	int temp = arr[0]%d;
	for(int i=1;i<n*m;i++){
		cin>>a;
		arr.pb(a);
		if(arr[i]%d!=temp)
			flag=0;
	}

	if(flag){
		sort(arr.begin(),arr.end());
		temp = arr.size()/2;
		int ans=0;
		for(int i=0;i<sz(arr);i++){
			ans+=(abs(arr[i]-arr[temp]))/d;
		}
		cout<<ans<<endl;
		return 0;
	} else{
		cout<<"-1";
	}
	return 0;
}