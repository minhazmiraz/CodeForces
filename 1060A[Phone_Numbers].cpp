#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int eight=0, others=0;
	for(int i=1;i<=n;i++){
		char ch;
		cin>>ch;
		if(ch=='8') eight++;
		else others++;
	}

	int tmp=min(eight, (others/10));
	eight-=tmp; others-=(tmp*10);
	int ans=tmp;
	if(eight && eight+others>=11){
		ans++;
		eight-=(11-others);
		ans+=eight/11;
	}
	cout<<ans<<endl;
	return 0;
}