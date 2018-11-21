#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y
#define NL printf("\n")
#define SP printf(" ")

int main(){
	string str;
	cin>>str;
	int len=str.length(),cnt=0;
	for(int i=0,j=len-1;i<len;i++,j--){
		if(str[i]!=str[j])
			cnt++;
	}
	if(len==1)
		cout<<"YES\n";
	else if(cnt==0&&!(len%2))
		cout<<"NO\n";
	else if(cnt>2)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}