#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int start=0;
	priority_queue< pair< int, int > > pq;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		pq.push({a, i});
	}

	vector< int > vc;
	int sum=0;
	while(!pq.empty() && k){
		k--;
		pair< int, int > pii = pq.top();
		pq.pop();
		sum+=pii.first;
		vc.push_back(pii.second);
	}
	sort(vc.begin(), vc.end());
	cout<<sum<<endl;
	for(int i=0;i<vc.size()-1;i++){
		//cout<<vc[i]<<endl;
		cout<<vc[i]-start<<" ";
		start=vc[i];
	}
	cout<<n-start<<endl;
	return 0;
}