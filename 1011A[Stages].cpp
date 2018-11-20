#include <bits/stdc++.h>
using namespace std;

set< char > st;
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		char ch;
		cin>>ch;
		st.insert(ch);
	}

	char prev='a'-2;
	int sum=0;
	for(auto p:st){
		if(((p)-prev)>=2){
			sum+=((p)-'a'+1);
			k--; prev=(p);
		}
		if(!k) break;
	}
	if(k) cout<<"-1\n";
	else cout<<sum<<endl;
	return 0;
}