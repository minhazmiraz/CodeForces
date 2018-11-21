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
	string str1,str2,out=" ";
	cin>>str1>>str2;
	for(int i=0;i<str1.length();i++){
		if(str1[i]<str2[i]){
			cout<<"-1\n";
			return 0;
		}
	}
	cout<<str2<<endl;
	return 0;
}