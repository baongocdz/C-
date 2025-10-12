#include<bits/stdc++.h>
using namespace std;
// phan tich: cho 2 mang a(n), b(m)
// yeu cau: lay ra k/2 pha tu trong ca a(n), b(m) (included 1....k) -> co truong hop lay trung nen khong du phan tu 
//yeu cau 2: khong lam theo kieu lay phan tu ma chi check de in yes no
int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n , m, k; cin >> n >> m >> k;
        vector<long long> a(n), b(m);
        for(long long& x : a) cin >> x;
        for(long long&x  : b) cin >> x;

        vector<int> Ina(k+1, 0), Inb(k+1, 0); // duyet phan tu trong a va b ma <=k truoc -> mang danh dau
        // K+1 vi: gia tri phai la 1...k (1-based)
        for(long long x : a) if(1 <= x && x <= k) Ina[x] = 1;
        for(long long x : b) if(1 <= x && x <= k) Inb[x] = 1;

        long long onlyA = 0, onlyB = 0, both = 0;
        for(long long i = 1; i <= k; i++){
            if(Ina[i] || Inb[i]) both++; // co trong ca 2
            if(Ina[i] && !Inb[i]) onlyA++; // chi co trong a
            if(Inb[i] && !Ina[i]) onlyB++; // chi co trong b 
        }
        cout << ((both == k && onlyA <= k/2 && onlyB <= k/2) ? "YES" : "NO") << endl;
    }
}
