#include <bits/stdc++.h>
using namespace std;
vector< long long > sq;
int main(){
	for(int i=0;i*i<=2000000000;i++) sq.push_back(i*i);
	int t;
	cin>>t;
	for(int kase=1;kase<=t;kase++){
		long long x;
		cin>>x;
		if(x==0){
			cout<<"1 1\n";
			continue;
		}
		long long po = upper_bound(sq.begin(), sq.end(), x)-sq.begin();
		bool f=0;
		for(int i=po;i<sq.size();i++){
			long long baki = sq[i]-x;
			if(baki>x) break;

			long long pos=lower_bound(sq.begin(), sq.end(), baki)-sq.begin();
			if(sq[pos] == baki){
				long long m = i/pos;
				if(i/m == pos) m=m;
				else if(i/(m+1) == pos) m++;
				else continue;
				cout<<i<<" "<<m<<endl;
				f=1;
				break;
			}
		}
		if(!f) cout<<"-1\n";
	}
	return 0;
}