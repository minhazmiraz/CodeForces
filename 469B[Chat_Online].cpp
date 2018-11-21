#include <bits/stdc++.h>
using namespace std;
bool vis[10005];
int main(){
	memset(vis,0,sizeof vis);
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	for(int i=1;i<=p;i++){
		int a,b;
		cin>>a>>b;
		for(int j=a;j<=b;j++) vis[j]=1;
	}
	
	vector< pair< int,int > > vc;
	for(int i=1;i<=q;i++){
		int a,b;
		cin>>a>>b;
		vc.push_back({a,b});
	}

	int ans=0;
	for(int i=l;i<=r;i++){
		for(int j=0;j<vc.size();j++){
			int flag=0;
			for(int k=vc[j].first+i;k<=vc[j].second+i;k++){
				if(vis[k]){
					ans++; flag=1;
					break;
				}
			}
			if(flag) break;
		}
	}
	cout<<ans<<endl;
	return 0;
}