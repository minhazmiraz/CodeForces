#include <bits/stdc++.h>
using namespace std;
int main(){
	int tcase;
	cin>>tcase;
	while(tcase--){
		int L, v, l,r;
		cin>>L>>v>>l>>r;
		cout<<(L/v)-((r/v)-((l-1)/v))<<endl;
	}

	return 0;
}