#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int len=str.length();
	if(len==1){
		cout<<"1\n";
		return 0;
	}
	int maxx=0, start=0;
	if(str[0]!=str[len-1]){
		int ltLen=0, rtLen=0;
		bool f=0;
		for(int i=0;i<len-1;i++){
			if(str[i]==str[i+1]){
				f=1, ltLen=i+1; break;
			}
		}

		if(f){
			for(int i=len-1;i>0;i--){
				if(str[i]==str[i-1]){
					rtLen=len-i; break;
				}
			}						
		} else{
			ltLen=len;
		}

		maxx=ltLen+rtLen;
	} 

	bool f=0;
	int i;
	for(i=0;i<len-1;i++){
		if(str[i]==str[i+1]){
			f=1;
			maxx=max(maxx, (i+1)-start);
			start=i+1;
		}
	}
	maxx=max(maxx, (i+1)-start);
	if(!f) maxx=len;
	cout<<maxx<<endl;
	return 0;
}