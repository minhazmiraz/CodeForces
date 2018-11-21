#include <bits/stdc++.h>
using namespace std;

int mat[5][5];

int main(){
	for(int i=0;i<3;i++){
		char f,s,t;
		cin>>f>>s>>t;
		if(s=='>'){
			mat[(t-'A')][(f-'A')]=1;
		} else if(s=='<'){
			mat[(f-'A')][(t-'A')]=1;
		}
	}

	if(mat[0][1] && mat[0][2] && mat[1][2])
		cout<<"ABC\n";
	else if(mat[0][1] && mat[0][2] && mat[2][1])
		cout<<"ACB\n";
	else if(mat[1][0] && mat[1][2] && mat[0][2])
		cout<<"BAC\n";
	else if(mat[1][2] && mat[1][0] && mat[2][0])
		cout<<"BCA\n";
	else if(mat[2][0] && mat[2][1] && mat[0][1])
		cout<<"CAB\n";
	else if(mat[2][1] && mat[2][0] && mat[1][0])
		cout<<"CBA\n";
	else
		cout<<"Impossible\n";
	return 0;
}