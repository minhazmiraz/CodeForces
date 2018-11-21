#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int arr[1000];
int main() {
    //ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	int cnt=0;
	memset(arr,0,sizeof arr);
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a && !arr[a]) arr[a]=1, cnt++;
	}
	cout<<cnt<<endl;
    return 0;
}
