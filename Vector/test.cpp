#include<bits/stdc++.h>
using namespace std;
// auto mặc định bỏ tham chiếu/cv-qualifier, nên:

// Muốn không copy phần tử: dùng auto&.

// Muốn không chỉnh sửa phần tử: dùng const auto&.

// for (auto& val : v) {      // sửa trực tiếp phần tử trong v
//     val += 5;
// }
// for (const auto& val : v) { // đọc-only, không copy
//     std::cout << val << " ";
// }
// int CongTruIterator (vector)
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    v.assign(3, 100);
    for(auto x : v){
        cout << x << " ";
    }
    return 0;
}