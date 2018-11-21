#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k, sum=0, minn=INT_MAX;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a<0 && k) sum-=a, k--;
		else sum+=a;
		minn=min(minn, abs(a));
	}
	//cout<<sum<<endl;
	if(k && k%2!=0) sum-=2*minn;
	cout<<sum<<endl;
	return 0;
}