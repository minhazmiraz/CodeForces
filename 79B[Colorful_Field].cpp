#include <bits/stdc++.h>
using namespace std;
int matrix[40005];
bool vis[40005];
vector< int > waste[40005];

int main(){
	int n,m,k,t;
	cin>>n>>m>>k>>t;
	for(int i=1;i<=k;i++){
		int a,b;
		cin>>a>>b;
		waste[a].push_back(b);
		matrix[a]++;
		vis[a]=1;
	}
	
	if(vis[1]) sort(waste[1].begin(), waste[1].end());
	for(int i=2;i<=n;i++){
		if(vis[i]) sort(waste[i].begin(), waste[i].end());
		matrix[i]+=matrix[i-1];
	}

	for(int i=1;i<=t;i++){
		int a,b;
		cin>>a>>b;
		int srch=0;
		if(vis[a]) srch = lower_bound(waste[a].begin(), waste[a].end(), b) - waste[a].begin();
		
		if(vis[a] && waste[a][srch]==b){
			cout<<"Waste\n";
		} else{
			int tmp=((a-1)*m)-matrix[a-1]+b;
			tmp-=srch;
			tmp%=3;
			if(tmp==1) cout<<"Carrots\n";
			else if(tmp==2) cout<<"Kiwis\n";
			else if(tmp==0) cout<<"Grapes\n";
			//else cout<<tmp<<endl;
		}
	}
	return 0;
}