#include <bits/stdc++.h>
using namespace std;
int main(){
	//while(1)
	{
		string str;
		cin>>str;
		queue< int > q0,q1;
		int sz=str.size();
		if(str[0]!='0' || str[sz-1]!='0')
			return cout<<"-1\n", 0;

		vector< int > vc[200010];
		int ptr=0;
		for(int i=0;i<sz;i++){
			if(str[i]=='0'){
				if(q1.empty()){
					vc[++ptr].push_back(i+1);
					q0.push(ptr);
				} else{
					int tmp = q1.front();
					q1.pop();
					vc[tmp].push_back(i+1);
					q0.push(tmp);
				}
			} else{
				if(q0.empty())
					return cout<<"-1\n", 0;
				else{
					int tmp=q0.front();
					q0.pop();
					vc[tmp].push_back(i+1);
					q1.push(tmp);
				}
			}
		}
		if(!q1.empty())
			return cout<<"-1\n", 0;
		cout<<q0.size()<<endl;
		while(!q0.empty()){
			int tmp=q0.front();
			q0.pop();
			cout<<vc[tmp].size()<<" ";
			for(int i=0;i<vc[tmp].size();i++)
				cout<<vc[tmp][i]<<" ";
			cout<<endl;
		}
	}
	return 0;
}

/*
	Powered by Buggy plugin
*/