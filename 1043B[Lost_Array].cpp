#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
	
int ar[1005];
int main(){
	int n;
	cin>>n;
	ar[0]=0;
	for(int i=1;i<=n;i++){
		cin>>ar[i];
	}

	vector< int > vc;
	for(int i=n;i>0;i--){
		vc.push_back(ar[i]-ar[i-1]);
	}

	int i=0, j=vc.size()-1;

	vector< int > ans;
	while(i<j){
		//cout<<i<<" "<<j<<endl;
		int t=j, cnt=0;
		while(vc[i]==vc[t] && i<vc.size() && t<vc.size()){
			i++; t++; cnt++;
		}
		if(t==vc.size()) ans.push_back(vc.size()-cnt);
		i=0; j--;
	}
	ans.push_back(vc.size());
	sort(ans.begin(), ans.end());
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";

	cout<<endl;

	return 0;
}