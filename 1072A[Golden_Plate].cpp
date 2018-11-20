#include <bits/stdc++.h>
using namespace std;
int main(){
	int w,h,k;
	cin>>w>>h>>k;
	int sum=0;
	for(int i=0;i<k;i++){
		sum+=2*(w-2-(4*i)) + 2*(h-(4*i));
	}
	cout<<sum<<endl;
	return 0;
}