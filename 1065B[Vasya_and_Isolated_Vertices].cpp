#include <bits/stdc++.h>
using namespace std;

/*int lower(int n){
	int lo=1, hi=100000;
	long long mid;
	while(lo<=hi){
		mid=(lo+hi)/2;
		if((mid*(mid-1)) < 2*n) lo=mid+1;
		else hi=mid-1;
	}
	return mid;
}*/

int main(){
	long long v,e;
	cin>>v>>e;

	if(e==0){
		cout<<v<<" "<<v<<endl;
		return 0;
	}

	if((v-(2*e))>0) cout<<v-(2*e)<<" ";
	else cout<<"0 ";

	for(long long i=1;i<=100000;i++){
		if(((i*(i-1))/2) >= e){
			cout<<v-i<<endl;
			break;
		}
	}
	/*int tmp=lower(e);
	if((tmp*(tmp-1))/2 == e) cout<<v-tmp<<"\n";
	else cout<<v-tmp-1<<"\n";*/
	return 0;
}