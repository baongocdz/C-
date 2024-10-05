#include <bits/stdc++.h>
using namespace std;

int Prime[1000001];

void Sieve(){
    for(int i = 0; i < 1000000; i++)
        Prime[i] = 1;
    Prime[1] = 0; Prime[0] = 0;
    for(int i = 2; i <= 1000; i++){
        if(Prime[i]){
            for(int j = i*i; j <= 1000000; j+=i){
                Prime[j] = 0;
            }
        }
    }
}

int main(){
    cout << "nhap t:\n";
    int t; cin >> t;
    Sieve();
    while(t--){
        int n;
        cin >> n;
        if(n%2!=0){
            return 0;
        }
        vector<pair<int, int>> s;
        for(int i = 2; i <= n/2; i++){
            if(Prime[i]&&Prime[n-i]){
                s.push_back({i,n-i});
            }
        }
        for(auto &p : s){
            cout << p.first << " " << p.second << endl;
        }
    }

    return 0;
}

// bool check (int n){
//     if(n < 2){
//         return 0;
//     }
//     for(int i = 2; i <= (int)sqrt(n); i++){
//         if(n%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     // int n;
//     // cin >> n;
//     // if(n > 2){
//     //     if(n%2 == 0){
//     //         for(int i = 2; i < n; i++){
//     //             for(int j = i; j < n; j++){
//     //                 if(check(i) && check(j)){
//     //                     if(i + j == n){
//     //                         cout << i << " " << j << endl;
//     //                     }
//     //                 }
//     //                 else{
//     //                     continue;
//     //                 }
//     //             }
//     //         }
//     //     }
//     //     return 0;
//     // }
//     // return 0;
    
// }