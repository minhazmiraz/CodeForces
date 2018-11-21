#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin>>n>>k;
	int cnt=0;
	while(n && cnt<k){
		cnt++;
		if(n%10==0) n/=10;
		else n--;
	}
	cout<<n<<endl;
	return 0;
}