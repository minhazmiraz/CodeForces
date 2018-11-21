#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long lo=1, hi=n, ans;
	while(lo<=hi){
		long long mid=(lo+hi)/2;
		long long vasaya=0, tmp=n;
		while(tmp>0){
			if(tmp>=mid) tmp-=mid, vasaya+=mid;
			else vasaya+=tmp, tmp=0;
			tmp-=((tmp*10)/100);
		}
		if(vasaya+vasaya >= n){
			hi=mid-1;
			ans=mid;
		} else{
			lo=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}