#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int arr[100001];
	memset(arr,0,sizeof arr);
	for(int i=1;i<str.length();i++){
		if(str[i]==str[i-1])
			arr[i]++;
		arr[i]+=arr[i-1];
	}

	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		l--,r--;
		cout<<arr[r]-arr[l]<<endl;
	}

	return 0;
}