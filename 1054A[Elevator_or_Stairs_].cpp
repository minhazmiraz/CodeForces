#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)

int main(){
	int x,y,z,t1,t2,t3;
	INT(x);INT(y);INT(z);INT(t1);INT(t2);INT(t3);

	int elev=abs(x-z)*t2 + abs(x-y)*t2 + (3*t3);
	int stair=abs(x-y)*t1;
	//cout<<elev<<" "<<stair<<endl;
	if(elev<=stair) printf("YES\n");
	else printf("NO\n");
	return 0;
}