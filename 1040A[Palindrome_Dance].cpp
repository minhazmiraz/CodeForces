#include <bits/stdc++.h>
using namespace std;
int arr[25];
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}

	int total=0, len=n/2;
	for(int i=1, j=n;i<=len;i++, j--){
		if(arr[i]==2 && arr[j]==2) total+=2*min(a,b);
		else if(arr[i]==2) total+=(arr[j]==0?a:b);
		else if(arr[j]==2) total+=(arr[i]==0?a:b);
		else if(arr[i]!=arr[j]){
			cout<<"-1\n";
			return 0;
		}
	}
	if(n%2!=0 && arr[len+1]==2) total+=min(a,b);
	cout<<total<<endl;
	return 0;
}