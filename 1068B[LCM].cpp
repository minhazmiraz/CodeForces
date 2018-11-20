#include <bits/stdc++.h>
using namespace std;

long long cnt(long long n) { 
    long long cnt = 0; 
    long long sqrtN=sqrt(n);
    for (long long i = 1; i <= sqrtN; i++) { 
        if (n % i == 0) { 
            if (n / i == i) cnt++; 
            else cnt = cnt + 2; 
        }
    } 
    return cnt; 
}

int main(){
	long long n;
	cin>>n;
	cout<<cnt(n)<<endl;
	return 0;
}