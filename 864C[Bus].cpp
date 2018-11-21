#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,f,k;
	cin>>a>>b>>f>>k;
	int i,cnt=0,gas,flag=1;
	if(b<f || b<(a-f)){
		cout<<"-1\n";
		return 0;
	}
	gas=b-f; i=1;
	while(i<=k){
		if(i==k){
			if(i%2==0){
				if(gas<f) gas=b, cnt++;
				gas-=f;
			} else{
				if(gas<(a-f)) gas=b, cnt++;
				gas-=(a-f);
			}
		} else{
			if(i%2==0){
				if(gas<(2*f)) gas=b, cnt++;
				gas-=2*f;
				gas<0?flag=0:flag=1;
			} else{
				if(gas<(2*(a-f))) gas=b, cnt++;
				gas-=2*(a-f);
				gas<0?flag=0:flag=1;
			}
		}
		i++;
	}

	if(flag)
		cout<<cnt<<endl;
	else
		cout<<"-1\n";
	return 0;
}
