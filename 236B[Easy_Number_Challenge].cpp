#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
	
int di[1000005];
int main() {
    //ios_base::sync_with_stdio(0);
	int a,b,c;
	cin>>a>>b>>c;
	int sum=0;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				int n=i*j*k;
				if(!di[n]){
					int sqrtN=sqrt(n), cnt=0;
					for(int ii=1;ii<=sqrtN;ii++){
						if(n%ii==0){
							if((n/ii)==(n/(n/ii))) cnt++;
							else cnt+=2;
						}
					}
					di[n]=cnt;
				}
				sum=(sum+di[n])%(1073741824);
			}
		}
	}
	cout<<sum<<endl;
    return 0;
}
