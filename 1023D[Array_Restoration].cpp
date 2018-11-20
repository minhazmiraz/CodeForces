#include <bits/stdc++.h>
using namespace std;
int lt[200005], rt[200005], arr[200005];
int main(){
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(n==1){
		if(arr[0]==0 || arr[0]==q){
			cout<<"YES"<<endl;
			if(arr[0]==0) arr[0]=q;
			cout<<arr[0]<<endl;
		} else{
			cout<<"NO\n";
		}
		return 0;
	} else if(n==2){
		if(arr[0]==0) arr[0]=q;
		if(arr[1]==0) arr[1]=q;
		if(arr[0]!=arr[1] && (arr[0]==q || arr[1]==q)){
			cout<<"YES"<<endl;
			cout<<arr[0]<<" "<<arr[1]<<endl;
		} else if(arr[0]==arr[1] && arr[0]==q){
			cout<<"YES"<<endl;
			cout<<arr[0]<<" "<<arr[1]<<endl;
		} else{
			cout<<"NO\n";
		}
		return 0;
	}


	int zeroflag=0, qflag=0;
	for(int i=0;i<n;i++){
		if(arr[i]==q) qflag=1;
		if(arr[i]==0){
			zeroflag++;
		}

		if(i!=0){
			if(arr[i]==0) lt[i]=lt[i-1];
			else if(arr[i]>arr[i-1]) lt[i]=-1;
			else if(arr[i]<arr[i-1]) lt[i]=1;
			else lt[i]=lt[i-1];
		}
	}

	if(zeroflag==0 && qflag==0){
		cout<<"NO\n";
		return 0;
	}

	for(int i=n-2;i>0;i--){
		if(arr[i]==0) rt[i]=rt[i+1];
		else if(arr[i]>arr[i+1]) rt[i]=-1;
		else if(arr[i]<arr[i+1]) rt[i]=1;
		else rt[i]=rt[i+1];
	}

	for(int i=1;i<n-1;i++){
		if(lt[i]==1 && rt[i]==1){
			cout<<"NO\n";
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			if(qflag==0) arr[i]=q, qflag=1;
			else arr[i]=arr[i-1];
		}
	}

	for(int i=n-2;i>=0;i--){
		if(arr[i]==0){
			arr[i]=arr[i+1];
		}
	}

	cout<<"YES"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}