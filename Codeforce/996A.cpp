#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int Denomination[] = {100, 20, 10, 5, 1}; //denomination(N): menh gia, 1 nhanh ton giao
    int res = 0;
    for(int x : Denomination)
    {
        res += n/x;
        n %= x;
        if(n == 0) break;
    }
    cout << res << endl;
    // while(n != 0)
    // {
    //     if(n >= 100)
    //     {
    //         n -= 100;
    //         res++;
    //     }
    //     else if(n >= 20)
    //     {
    //         n -= 20;
    //         res++;
    //     }
    //     else if(n >= 10)
    //     {
    //         n -= 10;
    //         res++;
    //     }
    //     else if(n >= 5)
    //     {
    //         n -= 5;
    //         res++;
    //     }
    //     else if(n >= 1)
    //     {
    //         n -= 1;
    //         res++;
    //     }
    // }
    // cout << res << endl;
    return 0;
}