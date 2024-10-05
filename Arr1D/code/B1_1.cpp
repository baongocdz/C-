#include <bits/stdc++.h>
using namespace std;

int sum(int a[]){
	
}
int main(){
	int n, SumOdd = 0, SumEvent = 0, CntOdd = 0, CntEvent = 0; cin >> n;
	int a[n];
	
	for(int &x : a) 
		cin >> x;
	
	for(int x : a){
		if(x%2 == 0){
			SumEvent += x;
			CntEvent++;
		}
		else{
			SumOdd += x;
			CntOdd++;
		}
	}
	cout << CntEvent << endl << CntOdd << endl << SumEvent << endl << SumOdd << endl;
	return 0;
}