#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	int arr[100005];
	arr[0]=0;
	cin>>arr[1];
	int flag=0, b=n, l=n;
	for(int i=2;i<=n;i++){
		cin>>arr[i];
		if(flag<2 && arr[i]<arr[i-1]){
			b=min(b,i-1);
			l=i; if(!flag) flag=1;
		} else if(arr[i]<arr[i-1]){
			cout<<"no\n";
			return 0;
		} else{
			if(flag)
				flag++;
		}
	}
	arr[n+1]=INT_MAX;
	if(arr[b]<arr[l+1] && arr[l]>arr[b-1]){
		cout<<"yes\n";
		cout<<b<<" "<<l<<endl;
	} else{
		cout<<"no\n";
	}
    return 0;
}
