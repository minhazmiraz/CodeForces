#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr[a]=i;
	}
	long long m, vasya=0, petya=0;
	cin>>m;
	for(int i=1;i<=m;i++){
		int a;
		cin>>a;
		int pos=arr[a];
		vasya+=(pos+1);
		petya+=(n-pos);
	}
	cout<<vasya<<" "<<petya<<endl;
	return 0;
}