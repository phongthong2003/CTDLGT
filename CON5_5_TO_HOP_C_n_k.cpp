#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int MAX = 1e3+5;
long long fac[MAX], inv[MAX];
long long power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a % MOD;
        }
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
void init() {
    fac[0] = inv[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fac[i] = fac[i-1] * i % MOD;
        inv[i] = power(fac[i], MOD-2);
    }
}
long long C(int n, int k) {
    if (k > n || k < 0) return 0;
    return fac[n] * inv[k] % MOD * inv[n-k] % MOD;
}
int main() {
    init();
    int T; cin >> T;
    while (T--) {
        int n, k; cin >> n >> k;
        cout << C(n, k) << '\n';
    }
    return 0;
}
// Hàm `init()` trong đoạn mã C++ trên được sử dụng để khởi tạo hai mảng `fac` và `inv`. 

// - Mảng `fac` được sử dụng để lưu trữ giai thừa của các số từ 0 đến 1000. Ví dụ, `fac[i]` sẽ chứa giá trị của `i!` (giai thừa của `i`) modulo 10^9+7.
// - Mảng `inv` được sử dụng để lưu trữ nghịch đảo modulo của các số từ 1 đến 1000. Ví dụ, `inv[i]` sẽ chứa giá trị của nghịch đảo modulo của `i!` modulo 10^9+7.

// Hàm `init()` sẽ được gọi một lần duy nhất ở đầu chương trình để khởi tạo hai mảng này.

