#include <bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
	int a,b,x;
	cin>>a>>b>>x;
	int n=a+b;
	if(a>=b) arr[1]=0,a--;
	else arr[1]=1,b--;
	x--;
	for(int i=2;i<=n;i++){
		if(x){
			x--, arr[i]=!arr[i-1];
			if(arr[i]==0) a--;
			else b--;
		} 
		else if(arr[i-1]==0 && a) a--, arr[i]=arr[i-1];
		else if(arr[i-1]==1 && b) b--, arr[i]=arr[i-1];
		else arr[i]=!arr[i-1];
	}

	for(int i=1;i<=n;i++) cout<<arr[i];
	cout<<endl;
	return 0;
}