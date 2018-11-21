#include <bits/stdc++.h>
using namespace std;

int first[100010], scnd[100010];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>first[i];
	}

	for(int i=1;i<=m;i++){
		cin>>scnd[i];
	}

	int i=1,j=1,sum1=0,sum2=0,cnt=0;
	while(i<=n && j<=m){
		//cout<<sum1<<" "<<sum2<<" "<<i<<" "<<j<<endl;
		if(sum1==sum2){
			if(sum1){
				cnt++;
				sum1=0, sum2=0;
			} else{
				sum1+=first[i];
				sum2+=scnd[j];
				i++, j++;
			}
		} else if(sum1<sum2){
			sum1+=first[i];
			i++;
		} else if(sum1>sum2){
			sum2+=scnd[j];
			j++;
		}
	}

	while(i<=n){
		if(sum1==sum2){
			cnt++;
			sum1=0, sum2=0;
		} else
			sum1+=first[i];
		i++;
	}

	while(j<=m){
		if(sum1==sum2){
			cnt++;
			sum1=0, sum2=0;
		} else{
			sum2+=scnd[j];
		}
		j++;
	}
	if(sum1 && sum1==sum2) cnt++;
	cout<<cnt<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/