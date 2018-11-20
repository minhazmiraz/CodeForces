#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,q;
	cin>>n>>q;
	for(int i=1;i<=q;i++){
		long long x,y;
		cin>>x>>y;
		if((x+y)%2==0){
			if(n%2==0){
				long long perrow=(n/2)*(x-1);
				if(y%2==0) cout<<perrow+(y/2)<<endl;
				else cout<<perrow+(y/2)+1<<endl;
			} else{
				long long choto=n/2;
				long long boro=choto+1;
				if(x%2==0){
					cout<<(x/2)*boro+choto*(x/2-1)+(y/2)<<endl;
				} else{
					cout<<(x/2)*boro+choto*(x/2)+(y/2)+1<<endl;
				}
			}
		} else{
			if(n%2==0){
				long long perrow=(n/2)*(x-1);
				if(y%2==0) cout<<((n*n)/2)+perrow+(y/2)<<endl;
				else cout<<((n*n)/2)+perrow+(y/2)+1<<endl;
			} else{
				long long choto=n/2;
				long long boro=choto+1;
				long long tmp=(n*n)/2 + 1;
				if(x%2==0){
					cout<<tmp+(x/2)*choto+boro*(x/2-1)+(y/2)+1<<endl;
				} else{
					cout<<tmp+(x/2)*boro+choto*(x/2)+(y/2)<<endl;
				}	
			}
		}
	}
	return 0;
}