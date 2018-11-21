#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int arr[20];
	memset(arr,0,sizeof arr);
	for(int i=0;i<(int)a.length();i++){
		int digit=a[i]-'0';
		arr[digit]++;
	}

	char ans[30];
	int ptr=0;
	if(a.length()==b.length()){
		for(int i=0;i<(int)b.length();i++){
			int digit=b[i]-'0';
			//cout<<digit<<endl;
			if(arr[digit]){
				ans[ptr++]=b[i];
				arr[digit]--;
			} else{
				while(1){
					int f=1;
					digit--;
					while(1){
						if(digit<0){
							f=0;
							break;
						}
						if(arr[digit]) break;
						digit--;
					}
					if(f==0){
						ptr--;
						arr[ans[ptr]-'0']++;
						digit=ans[ptr]-'0';
					} else
						break;
				}
				ans[ptr++]=(char)(digit+'0');
				arr[digit]--;
				break;
			}
			//cout<<ans<<endl;
		}
	}
	
	for(int i=9;i>=0;i--){
		while(arr[i]){
			ans[ptr++]=(char)(i+'0');
			arr[i]--;
		}
	}

	ans[ptr]='\0';
	for(int i=0;i<(int)strlen(ans);i++)
		cout<<ans[i];
	cout<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/