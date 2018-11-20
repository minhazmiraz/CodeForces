#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
#define fs first
#define sc second
typedef pair< int, pair< int, int > > pii;
string str;
int a[4*MAX], b[4*MAX], c[4*MAX];
void build(int i, int tl, int tr){
	if(tl==tr){
		a[i]=0;
		if(str[tl]=='(') b[i]=1, c[i]=0;
		else if(str[tl]==')') b[i]=0, c[i]=1;
	} else{
		int mid=(tl+tr)/2;
		build(2*i, tl, mid);
		build(2*i+1, mid+1, tr);
		int t=min(b[2*i], c[2*i+1]);
		a[i]=a[2*i]+a[2*i+1]+2*t;
		b[i]=b[2*i]+b[2*i+1]-t;
		c[i]=c[2*i]+c[2*i+1]-t;
		//cout<<a[i]<<endl;
	}
}


pii query(int i, int tl, int tr, int l, int r){
	if(l>r) return {0,{0,0}};
	if(tl==l && tr==r) return {a[i],{b[i],c[i]}};
	else{
		int mid=(tl+tr)/2;
		pii lt = query(2*i, tl, mid, l, min(mid, r));
		pii rt = query(2*i+1, mid+1, tr, max(mid+1, l), r);
		int t=min(lt.sc.fs, rt.sc.sc);
		int t1=lt.fs+rt.fs+2*t;
		int t2=lt.sc.fs+rt.sc.fs-t;
		int t3=lt.sc.sc+rt.sc.sc-t;
		return {t1,{t2,t3}};
	}
}


int main(){
	cin>>str;
	int len=str.length();
	build(1,0,len-1);
	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		l--, r--;
		pii tmp=query(1, 0, len-1, l, r);
		cout<<tmp.fs<<endl;
	}
	return 0;
}