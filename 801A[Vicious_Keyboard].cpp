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
	string str;
	cin>>str;
	int ans=0;
	if(str.length()==1){
		cout<<"0\n";
		return 0;
	}




	for(int i=0;i<str.length()-1;i++){
		ans+=(str[i]=='V' && str[i+1]=='K');
	}

	if((str[0]=='K'&&str[1]=='K')||(str[str.length()-2]=='V'&&str[str.length()-1]=='V')){
		cout<<ans+1<<endl;
		return 0;
	}


	for(int i=0;i<str.length()-2;i++){
		if((str[i]=='V' && str[i+1]=='V' && str[i+2]=='V') ||
			(str[i]=='K' && str[i+1]=='K' && str[i+2]=='K')){
			cout<<ans+1<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
	return 0;
}