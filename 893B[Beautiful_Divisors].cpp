#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[10];
	int n;
	cin>>n;
	arr[1]=1;arr[2]=6;arr[3]=28;arr[4]=120;arr[5]=496;
	arr[6]=2016;arr[7]=8128;arr[8]=32640;
	
	int ptr=1,ans=0;
	while(arr[ptr]<=n){
		
		if(n%arr[ptr]==0)
			ans=arr[ptr];
		ptr++;
		if(ptr==9)
			break;
	}
	cout<<ans<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/