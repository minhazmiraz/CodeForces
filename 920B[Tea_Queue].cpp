#include <bits/stdc++.h>
using namespace std;
typedef pair< int , pair< int, int > > pii;

bool comp(pii a, pii b){
	if(a.second.first<b.second.first)
		return true;
	else if(a.second.first==b.second.first)
		if(a.first<b.first) return true;
	return false;
}

int main(){
	int tcase;
	cin>>tcase;
	for(int kase=1;kase<=tcase;kase++){
		int n;
		pii arr[1005];
		cin>>n;
		for(int i=0;i<n;i++){
			int l,r;
			cin>>l>>r;
			arr[i]={i,{l,r}};
		}

		sort(arr,arr+n,comp);



		int tea[1005];
		for(int i=0, p=0;i<n;i++){
			if(arr[i].second.second>=p)
				tea[arr[i].first]=max(arr[i].second.first,p);
			else
				tea[arr[i].first]=0;
			if(tea[arr[i].first])
				p=tea[arr[i].first]+1;
			
		}

		cout<<tea[0];
		for(int i=1;i<n;i++)
			cout<<" "<<tea[i];
		cout<<endl;
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/