#include <bits/stdc++.h>
using namespace std;
#define MAX 200005
int seq[MAX],n;
map< int, int > dp;
vector< int > vc;
int main(){
	cin>>n;
	int maxx=0, ind;
	for(int i=1;i<=n;i++){
		cin>>seq[i];
		dp[seq[i]]=dp[seq[i]-1]+1;
		if(maxx<=dp[seq[i]]){
			maxx=dp[seq[i]];
			ind=seq[i];
		}
	}
	for(int i=n;i>0;i--){
		if(seq[i]==ind){
			vc.push_back(i);
			ind--;
		}
	}
	cout<<maxx<<endl;
	for(int i=vc.size()-1;i>=0;i--)
		cout<<vc[i]<<" ";
	cout<<endl;
	return 0;
}
