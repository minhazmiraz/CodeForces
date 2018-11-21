#include <bits/stdc++.h>
using namespace std;
int main(){

	int n,k,m;
	cin>>n>>k>>m;
	vector< int > cost;
	map< string, int > str;
	for(int i=1;i<=n;i++){
		string lang;
		cin>>lang;
		str[lang]=i;
	}

	cost.push_back(-1);
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		cost.push_back(a);
	}

	int grp[100005], trck[100005];
	memset(grp,63,sizeof grp);
	for(int i=1;i<=k;i++){
		int cnt;
		cin>>cnt;
		for(int j=1;j<=cnt;j++){
			int a;
			cin>>a;
			trck[a]=i;
			grp[i]=min(grp[i],cost[a]);
		}
	}

	long long ans=0;
	for(int i=1;i<=m;i++){
		string lang;
		cin>>lang;
		ans+=grp[trck[str[lang]]];
	}
	cout<<ans<<endl;
	return 0;
}