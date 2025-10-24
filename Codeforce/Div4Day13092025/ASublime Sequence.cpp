#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    if(!(cin >> t)) return 0;
    while(t--)
    {
        long long x, n; 
        cin >> x >> n;
        cout << ((n%2 == 0) ? 0 : x) << endl;
    }
    return 0;
}