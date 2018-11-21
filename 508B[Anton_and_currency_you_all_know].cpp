#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair

int main() {
    //ios_base::sync_with_stdio(0);
	string str;
	cin>>str;
	int len=str.length();
	int last=str[len-1]-'0';
	int even=0,yes=0;
	for(int i=0;i<len-1;i++){
		int tmp=str[i]-'0';
		if(tmp%2==0){
			even=i+1;
			if(tmp<last){
				yes=1;
				swap(str[len-1],str[i]);
				break;
			}
		}
	}
	if(!even)
		return cout<<"-1\n", 0;
	else if(!yes)
		swap(str[len-1],str[even-1]);

	cout<<str<<endl;
    return 0;
}
