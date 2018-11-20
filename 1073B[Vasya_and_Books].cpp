#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)

int a[200005], b[200005], pos[200005];
int main(){
	int n;
	INT(n);
	for(int i=1;i<=n;i++){
		INT(a[i]);
		pos[a[i]]=i;
	}

	int cur=0, ans=0;
	for(int i=1;i<=n;i++){
		INT(b[i]);
		if(pos[b[i]]>cur){
			ans=(pos[b[i]]-cur);
			cur=pos[b[i]];
			printf("%d ", ans);
		} else{
			printf("0 ");
		}
	}
	printf("\n");
	return 0;
}