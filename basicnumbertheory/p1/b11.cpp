#include<bits/stdc++.h>
using namespace std;

int Prime[1000000];

void Sieve(){
    for(int i = 0; i < 1000000; i++){
        Prime[i] = 1;
    }
    Prime[1] = 0; Prime[0] = 0;
    for(int i = 2; i*i <= 1000000; i++){
        for(int j = i*i; i <= 1000000; j+=i){
            Prime[i] = 0;
        }
    }
}

int main(){
    int t; 
    cin >> t;
    Sieve();
    while(t--){
        int n; cin >> n;
        int cnt = 0;
        for(int i = 2; i*i <= n; i++){
            if(Prime[i])
                cnt++;
        }
        cout << cnt << endl;
    }
    
}