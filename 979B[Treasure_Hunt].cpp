#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str[3];
	int vis[130],maxx[]={0,0,0}, mx=0, ind;
	for(int i=0;i<3;i++){
		cin>>str[i];
		memset(vis,0,sizeof vis);
		for(int j=0;j<str[i].length();j++){
			vis[str[i][j]]++;
			maxx[i]=max(maxx[i],vis[str[i][j]]);
		}
	}
	if(str[0].length()<=n){
		cout<<"Draw\n";
	} else{
		int mil[3], len=str[0].length();
		for(int i=0;i<3;i++){
			if((len-maxx[i]) >= n) mil[i]=maxx[i]+n;
			else if((len-maxx[i])!=0) mil[i]=len;
			else{
				int tmp = n;
				if(tmp!=1)
					mil[i]=len;
				else
					mil[i]=len-1;
			}

			if(mil[i]>mx){
				mx=mil[i];
				ind=i;
			}
		}

		if((mil[0]==mx && mil[0]==mil[1]) ||
			 (mil[1]==mx && mil[1]==mil[2]) ||
			  (mil[2]==mx && mil[0]==mil[2]))
			cout<<"Draw\n";
		else if(ind==0){
			cout<<"Kuro\n";
		}else if(ind==1){
			cout<<"Shiro\n";
		}else if(ind==2){
			cout<<"Katie\n";
		}
	}
	return 0;
}