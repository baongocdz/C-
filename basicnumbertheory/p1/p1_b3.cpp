#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i =2; i <= (int)sqrt(n); i++)
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
    cout << "nhap lan luot a va b: \n";
    int a, b; cin >> a >> b;

    for(int i = a; i <= b; ++i)
    {
        if(check(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}