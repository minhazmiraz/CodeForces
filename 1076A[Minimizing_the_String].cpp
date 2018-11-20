#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI 3.1415926535897932384626433832795

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	bool f=0;
	for(int i=1;i<s.length();i++){
		if(s[i]<s[i-1]){
			s[i-1]='#';
			f=1;
			break;
		}
	}
	if(!f) s[s.length()-1]='#';
	for(int i=0;i<s.length();i++){
		if(s[i]!='#') cout<<s[i];
	}
	cout<<endl;
	return 0;
}