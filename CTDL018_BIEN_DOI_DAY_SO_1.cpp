#include<bits/stdc++.h>
using namespace std;

void in_tam_giac_bds(vector<int> a) {
    int n = a.size();
    vector<vector<int>> tam_giac(n, vector<int>(n));
    for (int i = 0; i < n; i++) { // thiet lap tinh tu hang thu nhat
        tam_giac[0][i] = a[i];
    }
    for (int i = 1; i < n; i++) { // bat dau tinh tu hang n+ 1
        for (int j = 0; j < n - i; j++) {
            tam_giac[i][j] = tam_giac[i - 1][j] + tam_giac[i - 1][j + 1];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "[";
        for (int j = 0; j < n - i; j++) {
            cout << tam_giac[i][j];
            if (j < n - i - 1) cout << " ";
        }
        cout << "]" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        in_tam_giac_bds(a);
    }
    return 0;
}
