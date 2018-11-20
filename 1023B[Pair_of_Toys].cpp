#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	if(n+n <= k) return cout<<"0\n", 0;

	if(k<=n){
		cout<<k-(k/2)-1<<endl;
	} else{
		if(k%2==0){
			long long tmp=k/2;
			cout<<tmp-(k-n)<<endl;
		} else{
			long long tmp=k/2;
			cout<<tmp-(k-n)+1<<endl;
		}
	}
	return 0;
}