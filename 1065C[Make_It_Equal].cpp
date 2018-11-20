/*#include <bits/stdc++.h>
using namespace std;


int arr[200005], srt[200005];

int main(){
	long long n,k;
	cin>>n>>k;
	
	int mn=INT_MAX;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		srt[i]=arr[i];
		mn=min(mn, arr[i]);
	}
	sort(srt+1, srt+n+1);

	int csum[200005];

	for(int i=1;i<=n;i++){

	}

	return 0;
}*/


#include <bits/stdc++.h>
using namespace std;


int arr[200005], srt[200005];

int main(){
	long long n,k;
	cin>>n>>k;
	
	int mn=INT_MAX, mx=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		srt[i]=arr[i];
		mn=min(mn, arr[i]);
		mx=max(mx, arr[i]);
	}

	sort(srt+1, srt+n+1);
/*	long long need =0;
	for(int i=1;i<=n;i++){
		need+=(arr[i]-mn);
	}

	cout<<(need/k)+(need%k!=0)<<endl;*/
	int tup=0, up=0, ans=0;
	for(int i=mx;i>mn;i--){
		int tmp=lower_bound(srt+1, srt+n+1, i)-(srt+1);
		tmp=n-tmp;	
		up+=tmp;
		if(up==k){
			ans++;
			up=0;
		} else if(up>k){
			ans++;
			up=tmp;
		}
	}
	if(up!=0) ans++;
	cout<<ans<<endl;
	return 0;
}