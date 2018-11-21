#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define debug(x,y) cout<<x<<y
#define NL printf("\n")
#define SP printf(" ")

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v;
	int divi=2,temp=k;
	while(1){
		if(n<=1){
			break;
		} else if(n%divi==0){
			n/=divi;
			v.push_back(divi);
		} else {
			divi++;
		}
	}
	
	if(v.size()<k||v.empty())
		cout<<"-1\n";
	else{
		for(int i=0;i<k-1;i++)
			cout<<v[i]<<" ";
		int mul=1;
		for(int i=k-1;i<v.size();i++){
			mul*=v[i];
		}
		cout<<mul<<"\n";
	}
	return 0;
}