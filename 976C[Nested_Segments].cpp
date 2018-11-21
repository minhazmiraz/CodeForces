#include <bits/stdc++.h>
using namespace std;
#define MAX 20010

typedef pair< int,int > pii;
int n;
vector< pair< pii, int > > inp;

bool cmp(pair< pii, int > a, pair< pii, int > b){
	return (a.first.first < b.first.first) ||
	 (a.first.first == b.first.first && a.first.second > b.first.second);
}

void LIS(){
	vector< int > vc,arr;
	for(int i=n-1;i>=0;i--){
		auto ptr=upper_bound(vc.begin(),vc.end(),inp[i].first.second);
		if(ptr!=vc.end()){
			arr[0]=inp[i].second;
			vc[ptr-vc.begin()]=inp[i].first.second;
		}
		else{
			arr.push_back(inp[i].second);
			vc.push_back(inp[i].first.second);
		}
		if(vc.size()==2){
			cout<<arr[0]<<" "<<arr[1]<<endl;
			return;
		}
	}
	cout<<"-1 -1\n";
}

void read(){
	scanf("%d",&n);
	int w,h;
	for(int i=1;i<=n;i++){
		scanf("%d%d",&w,&h);
		inp.push_back({{w,h},i});
	}
}


int main(){
	read();
	sort(inp.begin(), inp.end(), cmp);
	LIS();
	return 0;
}