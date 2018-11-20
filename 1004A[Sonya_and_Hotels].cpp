#include <bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
	int n, d;
	cin>>n>>d;
	int cnt = 2;
	for(int i = 1;i<=n;i++){
		cin>>arr[i];
	}

	for(int i = 2;i<=n;i++){
		if((arr[i]-arr[i-1]) == (2*d)){
			cnt++;
		} else if((arr[i]-arr[i-1]) > (2*d)){
			cnt+=2;
		}
	}
	cout<<cnt<<endl;
	return 0;
}