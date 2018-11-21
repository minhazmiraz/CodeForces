#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	long long n,l;
	cin>>n>>l;
	int arr[1005];
	double maxx=0.0, tmp=0.0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);

	maxx=arr[0]-tmp; tmp=arr[0];
	for(int i=1;i<n;i++){
		tmp=(arr[i]-tmp)/2.0;
		if(maxx-tmp<=0) maxx=tmp;
		tmp=arr[i];
	}
	tmp=l-tmp;
	if(maxx-tmp<=0) maxx=tmp;
    cout<<setprecision(10)<<fixed<<maxx<<endl;
    return 0;
}
