#include <bits/stdc++.h>
using namespace std;

int vis[1005][1005];
int main(){
	int n;
	cin>>n;
	int ax,ay, bx,by, cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	
	if((bx<ax && cx<ax && by<ay && cy<ay) ||
		(bx>ax && cx>ax && by>ay && cy>ay)){
		cout<<"YES\n";
	} else if((bx>ax && cx>ax && by<ay && cy<ay) ||
		(bx<ax && cx<ax && by>ay && cy>ay)){
		cout<<"YES\n";
	} else cout<<"NO\n";

	return 0;
}