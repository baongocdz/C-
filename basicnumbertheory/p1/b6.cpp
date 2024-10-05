#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i <= (int)sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 5, cnt = 0;
    // cin >> n;
    if(n < 2){
        return 0;
    }
    for(int i = 2; i < pow(10, 5); i++){
        if(cnt < n){
            if(check(i)){
                cout << i << endl;
                cnt++;
            }
        }
        else{
            break;
        }
    }
    return 0;
}