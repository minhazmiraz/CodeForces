#include <bits/stdc++.h>
using namespace std;


int ldis[200005], rdis[200005];
int main(){
	int q;
	cin>>q;
	int cnt=0, lf=0, rf=0;
	for(int i=1;i<=q;i++){
		char ch;
		cin>>ch;
		int a;
		cin>>a;
		if(ch=='L'){
			if(cnt) lf++;
			cnt++;
			rdis[a]=lf;
		} else if(ch=='R'){
			if(cnt) rf++;
			cnt++;
			ldis[a]=rf;
		} else{
			int l=0, r=0;
			if(ldis[a]){
				l=ldis[a]+lf;
				r=rf-ldis[a];
			} else{
				l=lf-rdis[a];
				r=rdis[a]+rf;
			}
			cout<<min(l,r)<<endl;
		}
	}
	return 0;
}