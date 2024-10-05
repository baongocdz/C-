#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2; i <= (int)sqrt(n); i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    cout << "Nhap n:\n";
    int n,cnt = 0; cin >> n;
    for(int i = 2; i < n; ++i)
    {
        if(check(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}