#include <bits/stdc++.h>
using namespace std;
int arr[50];

int main(){
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		arr[(int)log2(a)]++;
	}

	for(int i=1;i<=q;i++){
		int a;
		cin>>a;
		int ptr=40, cnt=0;
		while(a && ptr){
			//cout<<ptr<<" \n";
			ptr--;
			int tmp = a/ceil(pow(2,ptr));
			if(tmp>=arr[ptr]){
				cnt+=arr[ptr];
				a-=ceil(pow(2,ptr))*arr[ptr];
			} else{
				cnt+=tmp;
				a=a%(int)ceil(pow(2,ptr));
			}
		}
		if(a) cout<<"-1\n";
		else cout<<cnt<<endl;
	}
	return 0;
}