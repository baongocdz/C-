#include<bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	for(int i = 0; i < n; i++){
		bool looped = false;
		int cnt = 1;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				looped = true;
				break;
			}
		}
		if(looped == false){
			cout << a[i] << " ";
			for(int j = i+1; j < n; j++){
				if(a[i] == a[j]) cnt++; 
			}
			cout << cnt << endl;
		}
		
	}
	return 0;
}
