#include <bits/stdc++.h>
using namespace std;

int main(){
	int k1,k2,k3;
	cin>>k1>>k2>>k3;
	int arr[10];
	memset(arr,0,sizeof arr);
	if(k1<=6)
		arr[k1]++;
	if(k2<=6)
		arr[k2]++;
	if(k3<=6)
		arr[k3]++;

	if(arr[1]>=1 || arr[2]>=2 || arr[3]>=3)
		cout<<"YES\n";
	else if(arr[2]==1 && arr[4]==2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
/*	bool arr[1005];
	memset(arr,false,sizeof arr);
	for(int i=0;i<=100;i++){
		arr[2+(i*3)]=true;
		arr[1+(i*5)]=true;
		arr[2+(i*3)]=true;
	}

	int f=1;
	for(int i=1;i<=60;i++)
		if(!arr[i]) f=0;
	cout<<f<<endl;*/
}

/*
	Powered by Buggy plugin
*/