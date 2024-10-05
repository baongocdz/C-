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

bool check2 (int n){
    while(n/10 > 0 || n%10 > 0) 
    {
        int m = n%10;
        if(m != 2 && m != 3 && m != 5 && m != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    cout << "nhap n: \n"; 
    cin >> n;
    cout << "nhap lan luot a va b: \n";
    for(int i = 0; i < n; ++i)
    {
        int a,b ;
         cin >> a >> b;
        int cnt = 0;
        for(int i = a; i <= b; ++i)
        {
            if(check(i))
            {
                if(check2(i))
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}