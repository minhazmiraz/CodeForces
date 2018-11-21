#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+5],zero=0,one=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]) one++;
		else zero++;
	}
	int maxx=max(zero,one),o=0;
	zero=0;
	for(int i=0;i<n;i++){
		if(arr[i]){
			o++;
			maxx=max(maxx,zero+(one-o+1));
		} else zero++;
	}
	cout<<maxx<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/