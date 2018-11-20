#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	int sz=n/2;
	int cnt=0;
	map< int, int > mp;
	for(int i=0;i<sz;i++){
		mp.clear();
		mp[a[i]]++, mp[a[n-i-1]]++;
		mp[b[i]]++, mp[b[n-i-1]]++;
		
		if(mp.size()==4) cnt+=2;
		else if(mp.size()==3){
			if(a[i]==a[n-i-1]) cnt+=2;
			else cnt++;
		} else if(mp.size()==2){
			if(a[i]!=a[n-i-1] && mp[a[i]]!=mp[a[n-i-1]]) cnt++;
			else if(a[i]!=b[n-i-1] && mp[a[i]]!=mp[b[n-i-1]]) cnt++;
			else if(a[i]!=b[i] && mp[a[i]]!=mp[b[i]]) cnt++;
		}
	}
	if(n%2 && a[n/2]!=b[n/2]) cnt++;
	cout<<cnt<<endl;
	return 0;
}