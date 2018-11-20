#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	if(k==0){
		cout<<n<<endl;
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
		cout<<endl;
		return 0;
	}
	if(n<(k*2+1)){
		if(n==1) cout<<n<<endl<<n<<endl;
		else cout<<"1\n"<<n/2<<endl;
		return 0;
	}
	int start=k+1;
	int slot=k*2+1;
	int baki=n%slot;
	if(baki && baki<=(k+1)){
		start-=(k+1)-baki;
	}
	vector< int > vc;
	for(int i=start;i<=n;i+=slot) vc.push_back(i);
	cout<<vc.size()<<endl;
	for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
	cout<<endl;
	return 0;
}