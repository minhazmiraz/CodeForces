#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k;
	cin>>k;
	string n;
	cin>>n;
	long long sum=0;
	vector< int > pq;
	for(int i=0;i<n.length();i++){
		sum+=(int)(n[i]-'0');
		pq.push_back((int)(n[i]-'0'));
	}

	sort(pq.begin(),pq.end());
	if(sum>=k){
		cout<<"0\n";
		return 0;
	} else{
		long long cnt=0;
		for(int i=0;i<pq.size();i++){
			if(pq[i]!=9){
				sum+= (9-pq[i]);
				cnt++;
				if(sum>=k){
					break;
				}
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}