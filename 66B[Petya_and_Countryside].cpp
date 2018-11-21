#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int maxx=1, inc=0, dec=0, flag=0;
	int arr[1005];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		int sum=1;
		for(int j=i-1;j>0;j--){
			if(arr[j]<=arr[j+1]) sum++;
			else break;
		}

		for(int j=i+1;j<=n;j++){
			if(arr[j]<=arr[j-1]) sum++;
			else break;
		}
		maxx=max(maxx,sum);
	}
	cout<<maxx<<endl;
	return 0;
}