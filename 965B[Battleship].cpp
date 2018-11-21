#include <bits/stdc++.h>
using namespace std;
string field[105];
int arr[105][105];
int main(){
	int n,k, maxx=0, x=0,y=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>field[i];
		for(int j=0;j<n;j++){
			int last=j;
			bool flag=1;
			for(int l=0;l<k;l++){
				if(field[i][j+l]!='.'){
					flag=0; last=j+l;
					break;
				}
			}

			if(flag){
				for(int l=0;l<k;l++){
					arr[i][j+l]++;
					if(arr[i][j+l]>maxx){
						maxx=max(maxx,arr[i][j+l]);
						x=i, y=j+l;
					}
				}
			} else{
				j=last;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int last=j;
			bool flag=1;
			for(int l=0;l<k;l++){
				if(field[j+l][i]!='.'){
					flag=0; last=j+l;
					break;
				}
			}

			if(flag){
				for(int l=0;l<k;l++){
					arr[j+l][i]++;
					if(arr[j+l][i]>maxx){
						maxx=max(maxx,arr[j+l][i]);
						x=j+l, y=i;
					}
				}
			} else{
				j=last;
			}
		}
	}

	cout<<x+1<<" "<<y+1<<endl;
	return 0;
}