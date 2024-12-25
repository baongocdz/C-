#include<bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	vector<int> b;
	for(int &x : a){
		cin >> x;
		bool Visited = true;
		for(int y : b){
			if(y == x)
				Visited = false;
		}
		if(Visited == true)
			b.push_back(x);
	}
		
	for(int x : b)
		cout << x << " ";
	return 0;
}
