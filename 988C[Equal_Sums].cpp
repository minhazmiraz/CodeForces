#include <bits/stdc++.h>
using namespace std;
int arr[200005], number[200005];
map< int, int > seq, idx;
int main(){
	int tcase;
	cin>>tcase;
	for(int kase=1;kase<=tcase;kase++){
		cin>>arr[kase];
		int sum=0;
		for(int i=1;i<=arr[kase];i++){
			cin>>number[i];
			sum+=number[i];
		}

		for(int i=1;i<=arr[kase];i++){
			sum-=number[i];
			if(seq[sum]>0){
				cout<<"YES\n";
				cout<<kase<<" "<<i<<endl;
				cout<<seq[sum]<<" "<<idx[sum]<<endl;
				return 0;
			}
			sum+=number[i];
		}
		
		for(int i=1;i<=arr[kase];i++){
			sum-=number[i];
			seq[sum]=kase;
			idx[sum]=i;
			sum+=number[i];

		}
	}
	cout<<"NO\n";
	return 0;
}