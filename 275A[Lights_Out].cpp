#include <bits/stdc++.h>
using namespace std;
int main(){

	int inp[5][5], pro[5][5];
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			cin>>inp[i][j];
		}
	}

	memset(pro,0,sizeof pro);
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			pro[i][j]+=inp[i][j];
			pro[i-1][j]+=inp[i][j];
			pro[i][j-1]+=inp[i][j];
			pro[i+1][j]+=inp[i][j];
			pro[i][j+1]+=inp[i][j];
		}
	}

	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(pro[i][j]%2==0)
				cout<<"1";
			else
				cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}