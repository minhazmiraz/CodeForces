#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long arr[150005];
map< long long, set< int > > idx;
int main(){
/*	chrono::time_point< chrono::high_resolution_clock > start, end;
	start = chrono::high_resolution_clock::now();*/
	
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		cin>>arr[i];
		idx[arr[i]].insert(i);
	}

	for(auto p:idx){
		bool flag=0;
		int fr,sc;
		while(!p.second.empty()){
			if(!flag){
				fr=*p.second.begin();
				flag=1;
				p.second.erase(p.second.begin());
			} else{
				sc=*p.second.begin();;
				arr[fr]=-1;
				arr[sc]*=2;
				idx[arr[sc]].insert(sc);
				flag=0;
				p.second.erase(p.second.begin());
			}
		}
	}

	int coun=0;
	for(int i=1;i<=n;i++){
		if(arr[i]!=-1) coun++;
	}
	cout<<coun<<endl;
	for(int i=1;i<=n;i++){
		if(arr[i]!=-1) cout<<arr[i]<<" ";
	}
	cout<<endl;

	
/*	end = chrono::high_resolution_clock::now();
	ll elapsed_time =  chrono::duration_cast< chrono::milliseconds >(end-start).count();
	cout << "\nElapsed Time: " << elapsed_time << "ms\n";*/
	return 0;
}