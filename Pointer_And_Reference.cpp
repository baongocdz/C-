// 1) Tham chiếu (&) vs Con trỏ (*) + const
// A. Tham chiếu
// const int& r = x;   // r là "bí danh" (alias) của x, CHỈ-ĐỌC qua r


// Tham chiếu = 1 cái tên khác của biến gốc. Không null, không đổi đích.

// const int& nghĩa là không được sửa x thông qua r:

// int x = 5;
// const int& r = x;
// // r = 7;         // ❌ lỗi: r là const-ref
// // ++r;           // ❌ lỗi
// x = 7;            // ✅ sửa trực tiếp x thì ok


// Điểm hay: const T& có thể bind vào tạm thời (temporary) và kéo dài lifetime:

// const std::string& s = std::string("abc"); // hợp lệ

// B. Con trỏ cơ bản
// int* p;     // p là biến "giữ địa chỉ" của 1 int


// Dùng & để lấy địa chỉ, dùng * để giải tham chiếu (truy cập giá trị).

// int n = 10;
// int* p = &n;   // p giữ địa chỉ của n
// *p = 777;      // sửa n qua p