#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int have[5],grp[5];
	grp[1]=0;
	have[1]=0, have[2]=2*n, have[4]=n;
	for(int i=1;i<=k;i++){
		int a;
		cin>>a;
		while(a>=4){
			if(have[4]>0)
				a-=4,have[4]--;
			else if(have[2]>1)
				a-=4, have[2]-=2;
			else if(have[2]==1)
				a-=4, have[2]--, grp[1]+=2;
			else
				grp[1]+=a, a-=a;
		}

		if(a==3){
			if(have[4]>0)
				a-=3,have[4]--;
			else if(have[2]>1)
				a-=3, have[2]-=2;
			else if(have[2]==1)
				a-=3, have[2]--, grp[1]++;
			else
				grp[1]+=3;
		} else if(a==2){
			if(have[2]>0)
				a-=2, have[2]--;
			else if(have[4]>0)
				a-=2, have[4]--, have[1]++;
			else
				grp[1]+=2;
		} else if(a==1)
			grp[1]++;
	}
	//cout<<have[1]+have[2]+have[4]<<" "<<grp[1]<<endl;

	if(have[1]+have[2]+(2*have[4])>=grp[1])
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}

/*
	Powered by Buggy plugin
*/