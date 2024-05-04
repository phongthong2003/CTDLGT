#include"bits/stdc++.h"
using namespace std;
#define ll long long
const ll mod = 1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i <n; i++){
            cin >> a[i];
        }
        ll ans = 0;
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            ans = (ans%mod+a[i]*i%mod)%mod;
        }
        cout << ans << endl;
    }
    return 0;
}