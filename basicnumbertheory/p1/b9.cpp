#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ // o day a >= b
    while(b!=0){
        int tmp = b;
        b = a % b;
        a = tmp; 
    }
    return a;
}

int main(){
    int a = 5, b = 8;
    // cin >> a >> b;
    if(a >= b && a <= 2 && b >= 100 ){
        return 0;
    }
    for(int i = a; i < b ; i++){
        for(int j = i+1; j <= b; j++){
            if(gcd(j, i) == 1){
                cout << "(" << i << "," << j << ")\n"; 
            }
        }
    }
    return 0;
}