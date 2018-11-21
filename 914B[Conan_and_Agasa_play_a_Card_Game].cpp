#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[100005];
	memset(arr,0,sizeof arr);
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		arr[a]++;
	}
	int f=1;
	for(int i=1;i<=100000;i++){
		if(arr[i]%2) f=0;
	}
	if(f)
		cout<<"Agasa\n";
	else
		cout<<"Conan\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/