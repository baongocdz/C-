#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	int res = INT_MAX;
	for(int &x : a) cin >> x;
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(abs(a[i] - a[j]) <= res){
				res = abs(a[i] - a[j]);
			}	
		}
	}
	cout << res;
	return 0;
}
