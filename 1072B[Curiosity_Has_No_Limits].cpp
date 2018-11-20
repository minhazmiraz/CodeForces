#include <bits/stdc++.h>
using namespace std;


int a[100005], b[100005], ans[100005][5];
int n;

bool dp(int pos, int last){
	if(pos>=n){ ans[pos][last]=-1; return 1; }
	for(int i=0;i<=3;i++)
		if((last|i)==a[pos] && (last&i)==b[pos]) 
			if(dp(pos+1, i)){ ans[pos][last]=i; return 1; }

	return 0;
}


int main(){
	cin>>n;
	for(int i=1;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++) cin>>b[i];
	for(int i=0;i<=3;i++){
		if(dp(1, i)){
			int j=1, last=i;
			cout<<"YES\n";
			while(j<=n){
				cout<<last<<" ";
				last=ans[j++][last];
			}
			cout<<endl;
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}