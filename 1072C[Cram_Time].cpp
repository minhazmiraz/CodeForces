#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	long long tmp=0, sum=0;
	while(1){
		tmp++;
		sum=(tmp*(tmp+1))/2;
		if(sum>(a+b)){
			tmp--; break;
		}
	}
	vector< int > va,vb;
	for(int i=tmp;i>=1;i--){
		if(a>=i){
			va.push_back(i);
			a-=i;
		} else if(b>=i){
			vb.push_back(i);
			b-=i;
		}
	}
	cout<<va.size()<<endl;
	for(int i=0;i<va.size();i++) cout<<va[i]<<" ";
	cout<<endl;

	cout<<vb.size()<<endl;
	for(int i=0;i<vb.size();i++) cout<<vb[i]<<" ";
	cout<<endl;
	return 0;
}