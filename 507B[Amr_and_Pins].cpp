#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	double r,x1,x2,y1,y2;
	cin>>r>>x1>>y1>>x2>>y2;
	double bash=r+r;
	double dist=sqr(x1-x2)+sqr(y1-y2);
	cout<<ceil(sqrt(dist)/(bash))<<endl;
    return 0;
}
