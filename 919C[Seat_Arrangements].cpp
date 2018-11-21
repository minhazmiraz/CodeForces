#include <bits/stdc++.h>
using namespace std;

int arr[2005][2005], row[2005][2005];
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	memset(arr,0,sizeof arr);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			if(c=='.') arr[i][j]=1;
		}
	}

	if(k==1){
		int sum=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				sum+=arr[i][j];
			}
		}
		cout<<sum<<endl;
		return 0;
	}

	int cnt=0;
	for(int i=1;i<=n;i++){
		row[i][1]=arr[i][1];
		for(int j=2;j<=m;j++){
			row[i][j]=arr[i][j]+row[i][j-1];
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=k;j<=m;j++){
			if(row[i][j]-row[i][j-k] == k)  cnt++;
		}
	}

	memset(row,0,sizeof row);
	for(int i=1;i<=m;i++){
		row[1][i]=arr[1][i];
		for(int j=2;j<=n;j++){
			row[j][i]=arr[j][i]+row[j-1][i];
		}
	}

	for(int i=1;i<=m;i++){
		for(int j=k;j<=n;j++){
			if(row[j][i]-row[j-k][i] == k)  cnt++;
		}
	}

	cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/