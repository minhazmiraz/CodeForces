#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,cnt=0,maxx=0;
	cin>>n;
	getchar();
	string str;
	getline(cin,str);
	for(int i=0;i<n;i++){
		if(str[i]==' '){
			maxx=max(cnt,maxx);
			cnt=0;
			continue;
		}
		if(str[i]>=65 && str[i]<=90)
			cnt++;
	}
	maxx=max(cnt,maxx);
	cout<<maxx<<endl;
	return 0;
}