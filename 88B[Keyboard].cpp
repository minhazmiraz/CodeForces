#include <bits/stdc++.h>
using namespace std;
string str[100];
vector< pair< int,int > > vc;
map< char,int > mp;
bool vis[200];
int main(){
	int n,m,x;
	cin>>n>>m>>x;
	for(int i=0;i<n;i++){
		cin>>str[i];
		for(int j=0;j<str[i].length();j++){
			if(str[i][j]=='S')
				vc.push_back({i,j});
			else
				vis[str[i][j]]=1;
		}	
	}
	int q;
	cin>>q;
	string query;
	cin>>query;
	for(int i=0;i<query.length();i++){
		char ch = query[i];
		if(ch>=65 && ch<=90){
			if(vc.size()==0){
				cout<<"-1\n";
				return 0;
			}
			mp[query[i]]++, ch+=32;
		}
		if(!vis[ch]){
			cout<<"-1\n";
			return 0;
		}
	}

	for(int k=0;k<vc.size();k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int X = abs(vc[k].first-i);
				int Y = abs(vc[k].second-j);
				X*=X, Y*=Y;
				if((X+Y)<=x*x){
					char ch=str[i][j];
					if(ch=='S') continue;
					else ch-=32;
					if(mp[ch]) mp[ch]=0;
				}
			}
		}
	}

	int sum=0;
	for(int i=0;i<query.length();i++){
		if(query[i]>=65 && query[i]<=90 && mp[query[i]]) /*cout<<query[i]<<" "<<mp[query[i]]<<endl,*/ sum++;
	}
	cout<<sum<<endl;
	return 0;
}

