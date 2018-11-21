#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	string str;
	cin>>str;
	int arr[3][105];
	bool great=0, less=0, equ=0;
	for(int i=0;i<n;i++){
		arr[1][i]=str[i]-'0';
	}
	sort(arr[1],arr[1]+n);
	for(int i=n;i<2*n;i++){
		arr[2][i-n]=str[i]-'0';
	}
	sort(arr[2],arr[2]+n);
	for(int i=0;i<n;i++){
		less|=(arr[1][i]<arr[2][i]);
		equ|=(arr[1][i]==arr[2][i]);
		great|=(arr[1][i]>arr[2][i]);
	}
	//cout<<great<<" "<<less<<" "<<equ<<endl;
	if((less & great) || equ) cout<<"NO\n";
	else cout<<"YES\n";
    return 0;
}
