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
	int p,x,y;
	cin>>p>>x>>y;
	int temp=y+((x-y)%50);
	for(int k=temp;;k+=50){
		int i=(k/50)%475;
		for(int j=1;j<=25;j++){
			i=((i*96)+42)%475;
			if((26+i)==p){
				if(k<=x)
					cout<<"0\n";
				else if((k-x)%100==0)
					cout<<(k-x)/100<<endl;
				else if((k-x)%100!=0)
					cout<<((k-x)/100)+1<<endl;
				return 0;
			}
		}
	}
	return 0;
}