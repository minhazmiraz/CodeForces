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
	int n,flag=0;
	cin>>n;
	int a,b;
	cin>>a>>b;
	int temp=a;
	if(a!=b){
		cout<<"rated\n";
		return 0;
	}
	for(int i=2;i<=n;i++){
		cin>>a>>b;
		if(a!=b){
			cout<<"rated\n";
			return 0;
		}
		else if(a>temp){
			flag=1;
		}
		temp=a;
	}
	if(flag==1)
		cout<<"unrated\n";
	else{
		cout<<"maybe\n";
	}
	return 0;
}