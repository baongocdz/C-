#include<bits/stdc++.h>
// #include <iostream>
using namespace std;

#define ll long long

int main(){
    ll n;
    cout << "nhap n: \n";
    // cin >> n;
    ll a[n][n];
    ll h1 = 0, h2 = n-1;
    ll c1 = 0, c2 = n-1;
    ll cnt = 1;
    while (h1 <= h2)
    {
        //xu ly hang tren
        for(ll i = c1; i <= c2; ++i){
            a[h1][i] = cnt;
            ++cnt;  
        }
        ++h1;
        //xu ly cot ben phai
        for(ll i = h1; i <= h2; ++i){
            a[i][c2] = cnt;
            ++cnt;
        }
        --c2;
        if(h1 < h2){
        // xu ly dong ben duoi
            for(ll i = c1; i <= c2; ++i){
                a[h2][i] = cnt;
                ++cnt;
            }
            --h2;
        }

        if(c1 < c2){
            //xu ly cot ben trai
            for(int i = h1; i <= h2; i++){
                a[i][c1] = cnt;
                cnt++;
            }
            ++c1;
        }
    }
    for(ll i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
// 1  2  3  4  5  6  7  8  9
// 26 33 34 35 36 37 38 39 10
// 27 52 57 58 59 60 61 40 11
// 28 53 70 73 74 75 62 41 12
// 29 54 71 80 81 76 63 42 13
// 30 55 72 78 79 77 64 43 14
// 31 56 66 67 68 69 65 44 15
// 32 46 47 48 49 50 51 45 16
// 18 19 20 21 22 23 24 25 17

