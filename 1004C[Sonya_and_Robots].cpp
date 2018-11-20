#include <bits/stdc++.h>
using namespace std;
set< int > st;
int arr[100005];
bool vis[100005], diff[100005];
int main(){
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(vis[arr[i]]) diff[i]=1;
		vis[arr[i]]=1;
	}
	
	for(int i=n;i>0;i--){
		if(!diff[i]) sum+=(long long)st.size();
		st.insert(arr[i]);
	}
	cout<<sum<<endl;
	return 0;
}