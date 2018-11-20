#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)

int main(){
	string s;
	cin>>s;
	int prev=-1;
	vector< int > vc;
	
	if(s[0]=='a') prev=1;
	else prev=2;
	for(int i=1;i<s.length();i++){
		//cout<<s[i]<<prev<<endl;
		if(s[i]=='a' && prev==1){
			vc.push_back(1);
			if(s[i-1]=='a') prev=1;
			else prev=2;
		}else if(s[i]=='b' && prev==2){
			vc.push_back(1);
			if(s[i-1]=='a') prev=1;
			else prev=2;
		} else vc.push_back(0);
	}

	if(s.back()=='a') vc.push_back(1);
	else vc.push_back(0);

	for(int i=0;i<vc.size();i++) cout<<vc[i]<<" ";
	cout<<endl;
	return 0;
}