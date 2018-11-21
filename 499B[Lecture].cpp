#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
map< string, string > arr;
int main() {
    //ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		string a,b;
		cin>>a>>b;
		if(a.length()<=b.length()) arr[a]=a;
		else arr[a]=b;
	}
	for(int i=1;i<=n;i++){
		string str;
		cin>>str;
		cout<<arr[str]<<" ";
	}
	cout<<endl;
    return 0;
}
