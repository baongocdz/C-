#include <bits/stdc++.h>
using namespace std;

int a[1000000];
void Eratosthenos(){
	for(int i = 0; i <= 1000000; i++) a[i] = 1;
	a[0] = a[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(a[i]){
			for(int j = i*i; j <= 1000000; j+=i){
				a[j] = 0;
			}
		}
	}
}
bool check(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2 ; i <= (int)sqrt(n); i++){
		if(n%i == 0)
			return 0;
	}
	
	return true;
}

int main(){
	int n; cin >> n;
	Eratosthenos();
	int cnt = 0, sum = 0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(check(x)){
			sum += x;
			cnt++;
		}
	}
	cout << (double)sum/cnt << endl;
	return 0;
}
