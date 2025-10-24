#include<bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
		
	int minPos=0, maxPos=0, min = 0, max = 0;
	for(int i = 0; i < n; i++){
		if(min >= a[i]){
			minPos = i;
			min = a[i];
		}
		else if(max < a[i]){
			maxPos = i;
			max = a[i];
		}
	}
	cout << minPos << " " << maxPos << endl;
	return 0;
}
