#include<bits/stdc++.h>
using namespace std;

int Prime[1000000];
void Sieve(){
    for (int i = 0; i < 1000000; i++)
        Prime[i] = 1;
    Prime[0] = 0; Prime[1] = 0;
    for(int i = 2; i*i <= 1000000; i++){
        if(Prime[i]){
            for(int j = i*i; j <= 1000000; j += i){
                Prime[j] = 0;
            }
        }
    }
}

bool check(int n){
    int sum = 0;
    int tmp = n;
    if(!Prime[tmp]) return false;
    while(n > 0){
        int a = n%10;
        if(a != 2 && a != 3 && a != 5 && a != 7){
            return false;
        }
        n /= 10;
        sum += a;
    }
    if(Prime[sum] && Prime[tmp]){
        return true;
    }
    return false;
}

int main(){
    cout << "nhap t:\n";
    int t;
    Sieve();
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(check(i)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
