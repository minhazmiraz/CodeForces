#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int arr[30];
int main() {
    //ios_base::sync_with_stdio(0);
	string str;
	cin>>str;
	int maxx=0,k;
	cin>>k;
	for(int i=0;i<26;i++){
		cin>>arr[i];
		maxx=max(maxx,arr[i]);
	}
	int sum=0;
	for(int i=0;i<str.length();i++){
		int tmp=str[i]-'a';
		sum+=(i+1)*arr[tmp];
	}
	for(int i=str.length();i<str.length()+k;i++){
		sum+=(i+1)*maxx;
	}
	cout<<sum<<endl;
    return 0;
}
