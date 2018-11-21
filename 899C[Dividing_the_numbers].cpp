#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long temp=(n*(n+1))/2;
	if(temp%2==0)
		cout<<"0"<<endl;
	else
		cout<<"1"<<endl;
	vector< long long > vc;
	long long sum=temp/2;
	//bool vis[60005];
	//memset(vis,false, sizeof vis);
	for(long long i=n;i>0;i--){
		if(sum-i<0){
			continue;
		}

		if(sum-i>=0){
			sum-=i;
			//vis[i]=true;
			vc.push_back(i);
		}

		if(!sum)
			break;

		if(sum<i){
			vc.push_back(sum);
			break;
		}
	}

	cout<<vc.size();
	for(int i=0;i<(int)vc.size();i++){
		cout<<" "<<vc[i];
	}
	return 0;
}