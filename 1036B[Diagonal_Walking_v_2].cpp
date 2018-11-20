#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	for(int i=1;i<=q;i++){
		long long n,m,k;
		cin>>n>>m>>k;
		if(max(n,m)>k){
			cout<<"-1\n";
			continue;
		}

		long long move=0;
		if(n<m) swap(n,m);
		
		if((n-m)%2!=0){
			cout<<k-1<<endl;
			continue;
		}

		long long tmp=k-n;
		if(tmp%2==0) move=k;
		else move=(k-2);
	
		cout<<move<<endl;
	}
	return 0;
}