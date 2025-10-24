#include<bits/stdc++.h>
#include <fstream>

using namespace std;

bool Fibo(int n){
	long long check1 = 5*n*n+4, check2 = 5*n*n-4;
	long long sq1 = sqrt(check1);
	long long sq2 = sqrt(check2);
	if(sq1 * sq1 == check1 || sq2 * sq2 == check2){
		return true;
	}
	return false;
}
int main(){
	int n; cin >> n;
	long long a[n];
	for(long long &x : a)
		cin >> x;
	
	bool founded = false;
	for(int i = 0; i < n; i++){
		if(Fibo(a[i])){
			cout << a[i] << " ";
			founded = true;
		}	
	}
	if(!founded) cout << "NONE\n";
	return 0;
}
