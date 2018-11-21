#include <bits/stdc++.h>
using namespace std;
set< int > st;
string str[1005];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>str[i];
		int g=0, f=0;
		for(int j=0;j<str[i].length();j++){
			if(str[i][j]=='G') f=1, g=j;
			if(f && str[i][j]=='S'){
				st.insert(j-g);
			} else if(str[i][j]=='S'){
				cout<<"-1\n";
				return 0;
			}
		}
	}
	cout<<st.size()<<endl;
	return 0;
}