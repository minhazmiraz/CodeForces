#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k,s;
	cin>>n>>k>>s;
	if(s<k) return cout<<"NO\n", 0;
	if((n-1)<ceil((s+0.0)/k)) return cout<<"NO\n", 0;
	long long tmp=s/k;
	long long stmp=s%k;
	long long start=1LL;
	cout<<"YES\n";
	int sign=1;
	for(int i=1;i<=k;i++){
		if(i%2!=0) sign=1;
		else sign=-1;

		if(stmp){
			start+=(sign*(tmp+1));
			cout<<start<<" ";
			stmp--;
		} else{
			start+=(sign*tmp);
			cout<<start<<" ";
		}
	}
	cout<<endl;
	return 0;
}