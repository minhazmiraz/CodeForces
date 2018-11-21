#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int maxx=max(a,b),minn=min(a,b);
	int tmp=n, maxcycle=-1;
	for(int i=0;;i++){
		if(maxx*i>tmp) break;
		if((tmp-(maxx*i))%minn==0){
			maxcycle=maxx*i;
			break;
		}
	}
	if(maxcycle==-1){
		cout<<maxcycle<<endl;
		return 0;
	}

	tmp=1;
	int cnt=0;
	for(int i=1;i<=maxcycle;i++){
		cnt++;
		if(cnt==maxx){
			cout<<tmp<<" ";
			tmp=i+1;
			cnt=0;
		} else{
			cout<<i+1<<" ";
		}
	}

	cnt=0;
	for(int i=tmp;i<=n;i++){
		cnt++;
		if(cnt==minn){
			cout<<tmp<<" ";
			tmp=i+1; cnt=0;
		} else
			cout<<i+1<<" ";
	}
	cout<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/