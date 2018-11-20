#include <bits/stdc++.h>
using namespace std;


bool arr[1005];

int main(){
	int n,r;
	cin>>n>>r;
	int cnt=0;
	vector< int > vc;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(arr[i]) cnt++, vc.push_back(i);
	}
	if(cnt==0) return cout<<"-1\n", 0;

	int ans=0;
	int ptr=0;
	for(int i=1;i<=r;i++){
		if(arr[i]){
			ptr=i;
		}
	}
	if(!ptr) return cout<<"-1\n", 0;
	while(ptr<=n+r-1){
		if(arr[ptr]){
			ans++;
			ptr+=(r+r-1);
			continue;
		}

		int tmp=lower_bound(vc.begin(), vc.end(), ptr)-vc.begin();
		if(ptr-vc[tmp-1] >=(r+r-1)) return cout<<"-1\n", 0;

		ptr=vc[tmp-1]; ans++;

		ptr+=(r+r-1);

	}

	cout<<ans<<endl;
	return 0;
}