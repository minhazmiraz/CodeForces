#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	
	if(n*8 < k ){
		cout<<"-1\n";
		return 0;
	}

	int a,sum=0,flag=0,reserv=0;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a<=8){
			sum+=a;
			if(reserv>=(8-a)){
				sum+=(8-a);
				reserv-=(8-a);
			} else{
				sum+=reserv;
				reserv=0;
			}
		}
		else{
			sum+=8;
			reserv+=(a-8);
		}
		if(sum>=k){
			cout<<i<<"\n";
			flag=1;
			break;
		}
	}

	if(!flag)
		cout<<"-1\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/