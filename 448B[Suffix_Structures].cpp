#include <bits/stdc++.h>
using namespace std;
#define Test(x) int x;cin>>x
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define mp make_pair
int cnt[30],cnt2[30];
string s,t;

bool func(int si, int ti){
	if(ti==t.length()) return 1;
	if(si==s.length()) return 0;
	bool f;
	if(s[si]==t[ti])
		f=func(si+1,ti+1);
	else
		f=func(si+1,ti);
	return f;
}

int main() {
    //ios_base::sync_with_stdio(0);
	cin>>s>>t;
	for(int i=0;i<s.length();i++){
		cnt[s[i]-'a']++;
	}

	for(int i=0;i<t.length();i++){
		cnt2[t[i]-'a']++;
	}

	for(int i=0;i<30;i++){
		//cout<<cnt2[i]<<" "<<cnt[i]<<endl;
		if(cnt2[i]>cnt[i]){
			cout<<"need tree\n";
			return 0;
		}
	}

	if(s.length()==t.length()){
		cout<<"array\n";
		return 0;
	}

	if(func(0,0)) cout<<"automaton\n";
	else cout<<"both\n";

    return 0;
}
