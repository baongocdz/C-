#include<bits/stdc++.h>
using namespace std;

vector<int> Sap_xep_Tang(const vector<int>& v)
{
    int n = v.size();
    vector<int> u = v;
    for(int i = 0; i < n - 1; i++)
    {
        int p = i; // min
        for(int j = i + 1; j < n; j++)
        {
            if(u[p] > u[j])
            {
                p = j; // doi sang vi tri be nhat
            }
        }
        if(p != i) swap(u[i], u[p]); // doi gia tri -> vi tai vi tri nay gia tri khong be nhat tai i ma tai p
    }
    return u;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; 
    if(!(cin >> n)) return 0;

    vector<long long> v(n), u(n), preV(n + 1, 0), preU(n + 1, 0);

    for(int i = 0; i < n; i++) cin >> v[i];

    u=v;
    sort(u.begin(), u.end());

    for(int i = 0; i < n; i++) preV[i+1] = preV[i] + v[i];

    for(int i = 0; i < n; i++) preU[i+1] = preU[i] + u[i];

    int nTest; cin >> nTest;
    while (nTest--)
    {
        int type, l, r; cin >> type >> l >> r;
        int L = l-1, R = r-1;

        if(type == 1)
            cout << preV[R+1] - preV[L] << endl;
        if(type == 2)
            cout << preU[R+1] - preU[L] << endl;
    }
    return 0;    
}


//cach binh thuong
// int main()
// {
//     int n; cin >> n;
//     vector<int> v(n);
//     for(auto& x : v) cin >> x;
//     vector<int> rv = Sap_xep_Tang(v);

//     int k; cin >> k;

//     while(k--)
//     {
//         int type = 0, l, r; cin >> type >> l >> r;
//         if(type == 1)
//         {
//             int sum = 0;
//             for(auto x = v.begin() + l - 1; x != v.begin() + r; x++)
//             {
//                 sum = sum + *x;
//             }
//             cout << sum << endl;
//         }
//         else
//         {
//             int sum = 0;
//             for(auto x = rv.begin() + l - 1; x != rv.begin() + r; x++)
//             {
//                 sum = sum + *x;
//             }
//             cout << sum << endl;
//         }
        
//     }

//     return 0;
//}



 