#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI acos(-1)

int arr[105];
vector< int > pos;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
int cnt=0;
	for(int i=1;i<=n-2;i++){
		if(arr[i]==1 && arr[i+1]==0 && arr[i+2]==1){
			cnt++;
                        arr[i+2]=0;
		}
	}
	
	cout<<cnt<<endl;
	return 0;
}