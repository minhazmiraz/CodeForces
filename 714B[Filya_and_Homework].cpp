#include <bits/stdc++.h>
using namespace std;
set< int > st;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		st.insert(a);
		if(st.size()>3){
			cout<<"NO\n";
			return 0;
		}
	}

	if(st.size()<3){
		cout<<"YES\n";
	} else if(st.size()==3){
		auto it = st.begin();
		int x = *it, y = *(++it), z = *(++it);
		if(y-x == z-y){
			cout<<"YES\n";
		} else{
			cout<<"NO\n";
		}
	}
	return 0;
}