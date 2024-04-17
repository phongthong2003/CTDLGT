#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;

vector<vector<ll>> nhan_ma_tran(const vector<vector<ll>>& a, const vector<vector<ll>>& b) {
    int n = a.size();
    vector<vector<ll>> ans(n, vector<ll>(n, 0));
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

vector<vector<ll>> luy_thua_ma_tran(const vector<vector<ll>>& a, ll k) {
    int n = a.size();
    if(k == 1) return a;
    if(k % 2 == 0) {
        vector<vector<ll>> half = luy_thua_ma_tran(a, k / 2);
        return nhan_ma_tran(half, half);
    } else {
        vector<vector<ll>> half = luy_thua_ma_tran(a, k / 2);
        vector<vector<ll>> temp = nhan_ma_tran(half, half);
        return nhan_ma_tran(temp, a);
    }
}

ll tong_duong_cheo_chinh(const vector<vector<ll>>& a) {
    int n = a.size();
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
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
        vector<vector<ll>> a(n, vector<ll>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        vector<vector<ll>> a_mu_k = luy_thua_ma_tran(a, k);
        ll ans = tong_duong_cheo_chinh(a_mu_k);
        cout << ans << endl;
    }
    return 0;
}

