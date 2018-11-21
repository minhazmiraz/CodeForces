#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	getchar();
	string str;
	getline(cin,str);
	int cnt[30];
	bool vis[30];
	memset(vis,false,sizeof vis);
	memset(cnt,0,sizeof cnt);
	for(int i=0;i<str.length();i++){
		cnt[str[i]-65]++;
	}
	vis[str[0]-65]=true;
	int maxx=1;
	cnt[str[0]-65]--;
	for(int i=1;i<str.length();i++){
		if(str[i]!=str[i-1]){
			if(!vis[str[i]-65]){
				if(cnt[str[i-1]-65]){
					maxx++;
				}
				vis[str[i]-65]=true;
			} else{
				if(cnt[str[i-1]-65]){
					maxx=maxx;
				} else{
					maxx--;
				}

			}
		}
		cnt[str[i]-65]--;

		if(maxx>k){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}