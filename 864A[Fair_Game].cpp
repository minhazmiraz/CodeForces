#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[105];
	memset(arr,0,sizeof arr);
	set< int > st;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		st.insert(a);
		arr[a]++;
	}
	if((st.size())%2==0 && arr[*st.begin()]==(n/2)){
		cout<<"YES\n";
		cout<<*st.begin()<<" ";
		auto itr=st.end(); itr--;
		cout<<*itr<<endl;
	} else
		cout<<"NO\n";	
	return 0;
}
