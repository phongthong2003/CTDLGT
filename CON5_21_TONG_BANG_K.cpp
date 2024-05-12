#include"bits/stdc++.h"
using namespace std;
#define ll long long
const ll mod = 1e9+7;
ll dem (ll a[], ll n, ll k){
    ll f[k+1];
    memset(f,0,sizeof(f));
    // for(int i = 0; i i <= n; i++){
    //     f[0] =0;
    // }
    f[0] = 1; 
    for(int i = 1; i<= k; i++){
        for(int j = 1; j <= n; j++){
            if(a[j] <= i){
                f[i] = (f[i]+f[i-a[j]])%mod;
            }
        }
    }
    return f[k];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll a[n+1];
        for(int i = 1; i<= n; i++){
            cin >> a[i];
        }
        cout << dem(a,n,k) << endl;
    }
    return 0;
}