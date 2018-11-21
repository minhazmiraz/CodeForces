#include <bits/stdc++.h>
using namespace std;
#define debug(x,y) cout<<x<<y
#define pb push_back
#define mp make_pair
#define Test(x) int x;cin>>x
#define mem(x,val) memset((x),(val),sizeof(x));
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))


int main(){
	int n;
	cin>>n;
	int arr[n+5],ans=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==1) cnt++;
	}

	if(cnt==n){
		cout<<n-1<<endl;
		return 0;
	}
	ans=cnt;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			int tcnt=cnt;
			for(int j=i;j<n;j++){
				if(!arr[j])
					tcnt++;
				else
					tcnt--;
				ans=max(ans,tcnt);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}