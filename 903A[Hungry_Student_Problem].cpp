#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		int t1=3, t2=7,flag=0;
		while(1){
			if((a-t1)>=0){
				if((a-t1)%7==0){
					flag=1;
					break;
				}
			} 

			if((a-t2)>=0){
				if((a-t2)%3==0){
					flag=1;
					break;
				}
			}

			if((a-t1)<0 && (a-t2)<0)
				break;
			t1+=3, t2+=7;
		}

		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/