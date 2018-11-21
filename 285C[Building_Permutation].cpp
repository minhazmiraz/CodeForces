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
	int arr[300010];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr,arr+n);
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=abs(arr[i]-i-1);
	}
	cout<<sum<<endl;
    return 0;
}
