#include <bits/stdc++.h>
using namespace std;
#define INT(a) scanf("%d",&a)
#define STR(a) scanf("%s",a)
#define DBL(a) scanf("%lf",&a)
#define LNG(a) scanf("%lld",&a)
#define PI acos(-1)
#define MX 100005
#define pii pair< int, int >

vector< int > graph[MX];
int par[MX], level[MX], disco[MX], table[MX][40],n, cnt=0;

void dfs(int s, int from, int l){
	par[s]=from; level[s]=l;
	disco[s]=++cnt;
	for(int i=0;i<graph[s].size();i++){
		int to=graph[s][i];
		if(to==from) continue;
		dfs(to,s,l+1);
	}
}

void sparseTable(){
	cnt=0;
	dfs(0,-1,0);
	memset(table,-1,sizeof table);
	for(int i=0;i<n;i++) table[i][0]=par[i];
	for(int j=1;(1<<j)<n;j++) for(int i=0;i<n;i++) if(table[i][j-1]!=-1) table[i][j]=table[table[i][j-1]][j-1];
}

int lcaQuery(int p, int q){
	if(level[p]<level[q]) swap(p,q);
	int lvl=1;
	while(1){
		int next=lvl+1;
		if((1<<next)>level[p]) break;
		lvl++;
	}
	for(int i=lvl;i>=0;i--) if(level[p]-(1<<i) >= level[q]) p=table[p][i];
	if(p==q) return p;
	for(int i=lvl;i>=0;i--) if(table[p][i]!=-1 && table[p][i]!=table[q][i]) p=table[p][i], q=table[q][i];
	return par[p];
}

struct node{
	int val[5];
	node(){memset(val, 0, sizeof val);};
	node(int a, int b, int c, int d){ val[0]=a, val[1]=b, val[2]=c, val[3]=d;};
	void print(){
		for(int i=0;i<4;i++) cout<<disco[val[i]]<<" ";
		cout<<endl;
	}
};

node tree[3*MX];

void init(int i, int tl, int tr){
	if(tl==tr) tree[i]=node(tl, tl, tl, tl);
	else {
		int tm=(tl+tr)/2;
		init(2*i,tl,tm);
		init(2*i+1,tm+1,tr);

		node lft=tree[2*i], rgt=tree[2*i+1];
		set< pii > vc;
		for(int i=0;i<4;i++){
			if(lft.val[i]>=0 && lft.val[i]<n) vc.insert({disco[lft.val[i]], lft.val[i]});
			if(rgt.val[i]>=0 && rgt.val[i]<n) vc.insert({disco[rgt.val[i]], rgt.val[i]});
		}

		int a,b,c,d;
		set< pii >::iterator it=vc.begin();
		if(vc.size()==1){
			a = b = c = d = (*it).second;
		} else if(vc.size()==2){
			a = c = (*it).second; it++; b = d = (*it).second; it++;
		} else if(vc.size()==3){
			a = (*it).second; it++; b = c = (*it).second; it++; d = (*it).second;
		} else if(vc.size()>=4){
			//cout<<"*\n";
			a = (*it).second; it++; b = (*it).second; it++;
			it=vc.end(); it--;
			d = (*it).second; it--; c = (*it).second; it--;
		}
		
		tree[i] = node(a,b,c,d);

		//tree[2*i].print(); tree[2*i+1].print(); tree[i].print();
		//cout<<"#"<<tl<<" "<<tm<<" "<<tr<<" "<<a<<" "<<mx<<" "<<mxNode<<endl;
	}
}


node query(int i, int tl, int tr, int L, int R){
	if(L>R) return node(-1000000,-1000000,1000000,1000000);
	else if(tl==L && tr==R) return tree[i];
	int tm=(tl+tr)/2;

	node lft = query(2*i,tl,tm,L,min(R,tm));
	node rgt = query(2*i+1,tm+1,tr,max(L,tm+1),R);

	set< pii > vc;
	for(int i=0;i<4;i++){
		if(lft.val[i]>=0 && lft.val[i]<n) vc.insert({disco[lft.val[i]], lft.val[i]});
		if(rgt.val[i]>=0 && rgt.val[i]<n) vc.insert({disco[rgt.val[i]], rgt.val[i]});
	}
	int a,b,c,d;

	set< pii >::iterator it=vc.begin();
	if(vc.size()==1){
		a = b = c = d = (*it).second;
	} else if(vc.size()==2){
		a = c = (*it).second; it++; b = d = (*it).second; it++;
	} else if(vc.size()==3){
		a = (*it).second; it++; b = c = (*it).second; it++; d = (*it).second;
	} else if(vc.size()>=4){
		a = (*it).second; it++; b = (*it).second; it++;
		it=vc.end(); it--;
		d = (*it).second; it--; c = (*it).second; it--;
	}

	
	return node(a,b,c,d);
	//cout<<"#"<<L<<" "<<tm<<" "<<R<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}



int main(){
	int q;
	INT(n); INT(q);
	for(int i=1;i<n;i++){
		int p;
		INT(p);
		graph[p-1].push_back(i);
	}
	sparseTable();
	init(1, 0, n-1);
	for(int i=1;i<=q;i++){
		int l,r;
		INT(l); INT(r);
		node out = query(1, 0, n-1, l-1, r-1);
		//out.print();
		int a=lcaQuery(out.val[0], out.val[2]);
		int b=lcaQuery(out.val[1],out.val[3]);
		//int c=lcaQuery(out.val[0], out.val[3]);
		//cout<<"*** "<<a<<" "<<b<<" "<<endl;

		if(level[a]>=level[b]) printf("%d %d\n", out.val[3]+1, level[a]);
		else printf("%d %d\n", out.val[0]+1, level[b]);
	}
	return 0;
}
