#include <bits/stdc++.h>
using namespace std;

vector< int > oo, zz, other[2];
int szo, soz, soo, szz;


int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		string ch;
		int a;
		cin>>ch>>a;
		if(ch=="00") zz.push_back(a);
		else if(ch=="01") other[0].push_back(a);
		else if(ch=="10") other[1].push_back(a);
		else oo.push_back(a);
	}


	sort(oo.begin(), oo.end(), greater< int >());
	sort(zz.begin(), zz.end(), greater< int >());
	sort(other[0].begin(), other[0].end(), greater< int >());
	sort(other[1].begin(), other[1].end(), greater< int >());

	szo=other[0].size(); soz=other[1].size();
	soo=oo.size(); szz=zz.size();

	long long ans=0;
	int minx=min(szo, soz);
	for(int i=0;i<minx;i++) ans+=(other[0][i]+other[1][i]);
	for(int i=0;i<soo;i++) ans+=oo[i];

	//cout<<ans<<endl;
	zz.push_back(-1); other[0].push_back(-1); other[1].push_back(-1); oo.push_back(-1);
	int cnt=0, i=minx, j=0, arek=0;
	if(szo<soz) arek=1;
	while(cnt<soo){
		if(other[arek][i]<=zz[j]){
			if(zz[j]==-1) break;
			ans+=zz[j++];
			//cout<<cnt<<" "<<oo[j-1]<<endl;
		} else{
			if(other[arek][i]==-1) break;
			ans+=other[arek][i++];
			//cout<<cnt<<" "<<other[arek][i-1]<<endl;
		}
		cnt++;
	}

	cout<<ans<<endl;
	return 0;
}