#include <bits/stdc++.h>
using namespace std;
int arr[100005],d[100005];
int n;
int dp(int i){
	//cout<<i<<" "<<f<<endl;
	if(d[i]!=-1)
		return d[i];
	if(i>n)
		return 0;
	int maxx=i;
	if(arr[i+1]>arr[i])
		maxx=max(maxx,dp(i+1));
	return d[i]=maxx;
}


int main(){
	cin>>n;
	memset(arr,0,sizeof arr);
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	memset(d,-1,sizeof d);
	int maxx=0;
	for(int i=n;i>0;i--){
		int temp=dp(i);
		//cout<<temp<<endl;
		maxx=max(maxx,temp-i+1);
		if(arr[temp+2]>arr[temp]+1)
			maxx=max(maxx,(d[temp+2]-i+1));
		if(arr[temp+1]>arr[temp-1]+1)
			maxx=max(maxx,(d[temp+1]-i+1));

		if(i!=1 || temp!=n)
			maxx=max(maxx,temp-i+2);

	}

	cout<<maxx<<endl;
	return 0;
}