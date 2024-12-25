#include<bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){
	vector<int> a = {1, 2, 3, 4, 5};
	vector<int>::iterator it1 = a.begin();
	it1++;
	cout << *(it1++) << endl;
	it1.assign(5, 100);
	for(auto x : it1) cout << x << " ";
}
