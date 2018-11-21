#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+5],coun[n+5];
	vector< int > missing;
	memset(coun,0,sizeof coun);
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		coun[arr[i]]++;
	}

	for(int i=1;i<=n;i++){
		if(coun[i]==0)
			missing.push_back(i);
	}

	cout<<missing.size()<<endl;
	for(int i=1,j=0;i<n;i++){
		if(coun[arr[i]]==1)
			cout<<arr[i]<<" ";
		else if(coun[arr[i]]>1){
			if(arr[i]<missing[j]){
				cout<<arr[i]<<" ";
				coun[arr[i]]=0;
			} else{
				cout<<missing[j]<<" ";
				j++;
				coun[arr[i]]--;
			}
		} else{
			cout<<missing[j]<<" ";
			j++;
		}
	}

	if(coun[arr[n]]==1)
		cout<<arr[n]<<endl;
	else
		cout<<missing.back()<<"\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/