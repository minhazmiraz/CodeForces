#include <bits/stdc++.h>
using namespace std;
string str[56];
bool row[55], col[55];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>str[i];
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(!row[j] && str[i]==str[j]){
				row[j]=1;
			}
		}

		for(int j=0;!row[i] && j<m;j++){
			if(!col[j] && str[i][j]=='#')
				col[j]=1;
			else if(str[i][j]=='#'){
				cout<<"No\n";
				return 0;
			}
		}
		row[i]=1;
	}
	cout<<"Yes\n";
	return 0;
}