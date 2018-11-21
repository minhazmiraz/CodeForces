#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int arr[30],maxx=0,cnt=0;
	memset(arr,0,sizeof arr);
	for(int i=0;i<n;i++){
		if(str[i]>=65 && str[i]<=90){
			memset(arr,0,sizeof arr);
			maxx=max(maxx,cnt);
			cnt=0;
		} else{
			if(!arr[str[i]-'a'])
				cnt++;
			arr[str[i]-'a']=1;
		}
	}
	maxx=max(maxx,cnt);
	cout<<maxx<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/