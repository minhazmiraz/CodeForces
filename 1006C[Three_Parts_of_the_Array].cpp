#include <bits/stdc++.h>
using namespace std;
int arr[200005];
long long lt[200005],rt[200005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		lt[i]=lt[i-1]+arr[i];
	}
	for(int i=n;i>0;i--){
		rt[i]=rt[i+1]+arr[i];
	}
	long long maxx=0;
	for(int i=n;i>0;i--){
		int pos=lower_bound(lt+1, lt+n+1, rt[i])-(lt+1);
		if(rt[i]==lt[pos+1]){
			if(pos+1>=i) break;
			if(lt[pos+1]>maxx) maxx=lt[pos+1];
			//cout<<i<<" "<<maxx<<" "<<pos+1<<endl;
		}
	}
	cout<<maxx<<endl;
	return 0;
}