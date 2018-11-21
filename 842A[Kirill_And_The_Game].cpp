#include <bits/stdc++.h>
using namespace std;

int main(){
	int l,r,x,y,k;
	cin>>l>>r>>x>>y>>k;
	for(int i=l;i<=r;i++){
		if(i%k==0 && (i/k)>=x && (i/k)<=y){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
