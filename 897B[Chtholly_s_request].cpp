#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,p;
	cin>>n>>p;
	vector< long long > vc;
	for(int i=11;i<=99;i+=11){
		vc.push_back(i);
		//cout<<i<<endl;		
	}
	for(int j=0000;j<=8008;j+=1001)
		for(int i=1001+j;i<=2000+j;i+=110){
			vc.push_back(i); 
			//cout<<i<<endl;	
		}
	
	for(int k=100001;k<=900009;k+=100001)
		for(int j=000000+k;j<=90090+k;j+=10010)
			for(int i=0000+j;i<=9900+j;i+=1100){
				vc.push_back(i);
				//cout<<i<<endl;	
			}

	for(int l=10000001;l<=90000009;l+=10000001)
		for(int k=0+l;k<=9000090+l;k+=1000010)
			for(int j=000000+k;j<=900900+k;j+=100100)
				for(int i=0000+j;i<=99000+j;i+=11000){
					vc.push_back(i);
					//cout<<i<<endl;	
				}
	for(long long x=1000000001;x<=9000000009;x+=1000000001)
		for(long long l=x;l<=900000090+x;l+=100000010)
			for(long long k=l;k<=90000900+l;k+=10000100)
				for(long long j=k;j<=9009000+k;j+=1001000)
					for(long long i=j;i<=990000+j;i+=110000){
						vc.push_back(i);
						//cout<<i<<endl;
					}

	vc.push_back(100000000001);

	//cout<<vc.size()<<endl;

	long long arr[100005];
	memset(arr,0,sizeof arr);
	arr[0]=(vc[0]%p);
	for(int i=1;i<100000;i++){
		arr[i]=(vc[i]%p+arr[i-1])%p;
	}
	
	cout<<arr[n-1]<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/