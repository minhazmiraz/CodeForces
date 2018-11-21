#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	string str;
	cin>>str;
	int up=0, low=0;
	for(int i=0;i<str.length();i++){
		if(str[i]>='A' && str[i]<='Z') up++;
		else low++;
	}

	if(up>low){
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		cout<<str<<endl;
	} else{
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		cout<<str<<endl;
	}
    return 0;
}
