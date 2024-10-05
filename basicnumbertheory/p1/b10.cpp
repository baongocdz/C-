#include<bits/stdc++.h>
using namespace std;

int cnt(int n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            cnt++;
            if(i != n/i){
                cnt++;
            }
        }
    }   
    return cnt;
}

int main(){
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n = 50;
        // cin >> n;
        for(int i = 1; i <= n; i++){
            if(cnt(i) == 3){
                cout << i << " ";
            }
        }
    }
    return 0;
}