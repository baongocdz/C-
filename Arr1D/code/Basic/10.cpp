#include<bits/stdc++.h>
#include <fstream>
using namespace std;

bool Prime(int n){
	if(n < 2) return false;
	for(int i = 2; i <= (int)sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
//	for(int i = 0; i < n; i++){
//		if(i > 0 && i < n-1){
//			int sumLeft = 0, sumRight = 0;
//			for(int j = 0; j < i; j++){
//				sumLeft += a[j];
//			}
//			if(!Prime(sumLeft)) continue;
//			for(int j = i+1; j < n; j++){
//				sumRight += a[j];
//			}
//			if(Prime(sumRight)){
//				cout << i << " ";
//			}
//		}
//	}
	int sum = accumulate(a, a+n, 0);
	int sumLeft = 0, sumRight = sum;
	for(int i = 0; i < n; i++){
		sumRight -= a[i];
		if(i!=0 || i!=n-1){
			if(Prime(sumLeft) && Prime(sumRight))
				cout << i << " ";
		}
		sumLeft += a[i];
	}
	return 0;
}

