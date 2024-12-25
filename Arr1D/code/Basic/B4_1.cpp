#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int k; cin >> k;
	int be = 0, lon = 0;
	for(int x  : a){
		if(k > x){
			be++;
		}
		else if(k < x){
			lon++;
		}
	}
	cout << be << endl << lon << endl;
	return 0;
}
