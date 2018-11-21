#include <bits/stdc++.h>
using namespace std;
int arr[200];
int main(){
	int n,a;
	cin>>n>>a;
	memset(arr,-1,sizeof arr);
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int p=0, ans=0;
	while(1){
		if(a-p<=0 && a+p>n) break;
		else if(a+p>n) ans+=arr[a-p];
		else if(a-p<=0) ans+=arr[a+p];
		else if(arr[a+p]==1 && arr[a-p]==1){
			if(p==0) ans++;
			else ans+=2;
		}
		p++;
	}
	cout<<ans<<endl;
	return 0;
}