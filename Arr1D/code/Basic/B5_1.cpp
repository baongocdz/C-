#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	
	bool chan = false;
	for(int i = 2; i < n; i+=2){
		if(i == n+1) break;
		if(a[i] % 2 == 0){
			if(chan == false) chan = true;
			cout << a[i] << " ";
		}
	}
	
	return 0;
}
