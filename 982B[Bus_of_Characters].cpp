#include <bits/stdc++.h>
using namespace std;
set< pair< int, int > > intro;
priority_queue< pair< int, int > > extro;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		intro.insert({a,i});
	}
	getchar();
	for(int i=1;i<=2*n;i++){
		char ch = getchar();
		if(ch=='0'){
			pair< int, int > tmp=*intro.begin();
			cout<<tmp.second<<" ";
			extro.push(tmp);
			intro.erase(intro.begin());
		} else{
			pair< int, int > tmp=extro.top();
			cout<<tmp.second<<" ";
			extro.pop();
		}
	}
	cout<<endl;
	return 0;
}