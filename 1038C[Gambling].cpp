#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> fs,sc;

	long long fsSum=0, scSum=0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		fsSum+=a;
		fs.push_back(a);
	}

	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		scSum+=a;
		sc.push_back(a);
	}

	sort(fs.begin(), fs.end());
	sort(sc.begin(), sc.end());

	int turn=0;
	long long Asum=0, Bsum=0;
	while(fsSum || scSum){
		if(turn%2==0){
			int x=0,y=0;
			if(fsSum) x=fs.back();
			if(scSum) y=sc.back();
			if(x>y){
				Asum+=x;
				fsSum-=x;
				fs.pop_back();
			} else{
				scSum-=y;
				sc.pop_back();
			}
		} else{
			int x=0,y=0;
			if(fsSum) x=fs.back();
			if(scSum) y=sc.back();
			if(x<y){
				Bsum+=y;
				scSum-=y;
				sc.pop_back();
			} else{
				fsSum-=x;
				fs.pop_back();
			}
		}
		turn++;
	}

	cout<<Asum-Bsum<<endl;
	return 0;
}