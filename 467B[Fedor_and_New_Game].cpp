#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int n,m,k,coun=0;
	cin>>n>>m>>k;
	int arr[m+5];
	for(int i=1;i<=m+1;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=m;i++){
		int tmp=arr[i]^arr[m+1];
		int cnt=0;
		while(tmp){
			if(tmp%2!=0) cnt++;
			tmp/=2; 
		}
		if(cnt<=k) coun++;
	}
	cout<<coun<<endl;
    return 0;
}
