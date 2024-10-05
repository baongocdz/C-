#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n < 2)
    {
        return false;
    }
    for(int i = 2; i <= (int)sqrt(n); ++i)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int a; cin >> a;
        if(check(a))
        {
            cout << "YES\n";
        } 
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}