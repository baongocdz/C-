#include <bits/stdc++.h>
using namespace std;

int arr[100000] = {0};


int main(){
	int n; cin >> n;
	int a[n];
	int min = INT_MAX;
	for(int &x : a){
		cin >> x;
		if(min > x) 
			min = x;
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == min){
			cnt++;
		}
	}
	cout << cnt << endl;	
	return 0;
} 
