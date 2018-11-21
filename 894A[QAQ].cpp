#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int q=0,arr[105],ptr=0;
	for(int i=0;i<(int)str.length();i++){
		if(str[i]=='Q')
			q++;
		if(str[i]=='A')
			arr[ptr++]=q;
	}

	int sum=0;
	for(int i=0;i<ptr;i++){
		sum+=(arr[i]*(q-arr[i]));
	}
	cout<<sum<<endl;
	return 0;
}

/*
	Powered by Buggy plugin
*/