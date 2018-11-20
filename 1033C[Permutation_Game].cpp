#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005], pos[100005], dis[100005];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pos[a[i]]=i;
	}

	memset(dis,-1, sizeof dis);

	for(int i=n;i>=1;i--){
		bool f=1;
		for(int j=pos[i]-i; j>=1; j-=i){
			if(a[j]>i) if(dis[a[j]]==0) f=0;
		}

		for(int j=pos[i]+i;j<=n;j+=i){
			if(a[j]>i) if(dis[a[j]]==0) f=0;
		}
		
		if(f) dis[i]=0;
		else dis[i]=1;
	}

	for(int i=1;i<=n;i++){
		if(dis[a[i]]) cout<<"A";
		else cout<<"B";
	}
	cout<<"\n";
	return 0;
}