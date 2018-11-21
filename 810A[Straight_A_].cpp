#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y
#define Test(x) int x;cin>>x
#define mem(x,val) memset((x),(val),sizeof(x));
#define NL printf("\n")
#define SP printf(" ")
#define clr(a) memset(a, 0, sizeof a)
#define reset(a) memset(a, -1, sizeof a)

int main(){
	int n,k,sum=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		sum+=a;
	}
	double avg = (double)sum/(double)n;
	double dist = k-avg;
	if(dist<=0.5){
		cout<<"0\n";
		return 0;
	}
	int temp = n;
	while(1){
		sum+=k;
		temp++;
		avg = (double)sum/(double)temp;
		double dist = k-avg;
		if(dist<=0.5){
			cout<<temp-n<<"\n";
			return 0;
		}
	}

	return 0;
}