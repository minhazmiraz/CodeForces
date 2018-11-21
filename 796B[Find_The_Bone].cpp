#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y
#define NL printf("\n")
#define SP printf(" ")

int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int arr[n+5];
	memset(arr,0,sizeof(arr));
	for(int i=1;i<=m;i++){
		int a;
		scanf("%d",&a);
		arr[a]=1;
	}

	int pos=1,flag=1;
	for(int i=1;i<=k;i++){
		int u,v;
		scanf("%d%d",&u,&v);
		if(flag==1 && pos==u) {
			if(arr[u]==1){
				pos=u;
				flag=0;
			} else if(arr[v]==1){
				pos=v;
				flag=0;
			} else {
				pos=v;
				flag=1;
			}
		} else if(flag==1 && pos==v) {
			if(arr[v]==1){
				pos=v;
				flag=0;
			} else if(arr[u]==1){
				pos=u;
				flag=0;
			} else {
				pos=u;
				flag=1;
			}
		}
	}
	printf("%d\n",pos);
	return 0;
}