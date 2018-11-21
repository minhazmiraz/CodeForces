#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int arr[105];
	memset(arr,0,sizeof arr);
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		arr[a]=1;
	}
	int cnt=0;
	for(int i=0;i<x;i++){
		if(!arr[i])
			cnt++;
	}
	if(arr[x]) cnt++;
	cout<<cnt<<endl;
	return 0;
}