#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=5) cout<<"-1\n";
	else if(n%2==0){
		for(int i=2;i<=(n/2)+1;i++){
			cout<<"1 "<<i<<endl;
		}
		
		for(int i=(n/2)+2;i<=n;i++){
			cout<<"2 "<<i<<endl;
		}
	} else if(n%2){
		for(int i=2;i<=n-2;i++){
			cout<<"1 "<<i<<endl;
		}
		cout<<"2 "<<n-1<<endl;
		cout<<"2 "<<n<<endl;
	}

	for(int i=2;i<=n;i++){
		cout<<"1 "<<i<<endl;
	}
	return 0;
}