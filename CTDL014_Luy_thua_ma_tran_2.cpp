#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vt vector
const ll mod = 1e9+7;
vt<vt<ll>> mul(const vt<vt<ll>>& a, const vt<vt<ll>>& b) {
    int n = a.size();
    vt<vt<ll>> ans(n, vector<ll>(n, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                ans[i][j] += (a[i][k] * b[k][j]) % mod;
                ans[i][j] %= mod;
            }
        }
    }
    return ans;
}
vt<vt<ll>> power(const vt<vt<ll>>& a, ll k) {
    int n = a.size();
    if(k == 1) {
        return a;
    }
    if(k % 2 == 0) {
        vt<vt<ll>> half = power(a, k / 2);
        return mul(half, half);
    } else {
        vt<vt<ll>> half = power(a, k / 2);
        vt<vt<ll>> temp = mul(half, half);
        return mul(temp, a);
    }
}
ll sum_duong_cheo_phu(const vt<vt<ll>>& a) {
    int n = a.size();
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i][n - 1 - i];
        sum %= mod;
    }
    return sum;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vt<vt<ll>> a(n, vt<ll>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        vt<vt<ll>> a_mu_k = power(a, k);
        ll ans = sum_duong_cheo_phu(a_mu_k);
        cout << ans << endl;
    }
    return 0;
}

