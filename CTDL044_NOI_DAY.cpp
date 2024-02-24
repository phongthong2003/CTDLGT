#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod = 1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll value;
        priority_queue<ll, vector<ll>,greater<ll>>pq;
        for(int i = 1;i<=n; i++){
            cin >> value;
            pq.push(value);
        }
        ll res = 0;
        while(pq.size()>1){
            ll x = pq.top(); pq.pop();
            ll y = pq.top(); pq.pop();
            ll temp = (x+y)%mod;
            res+=temp;
            res%=mod;
            pq.push(temp);
        }
        cout << res << endl;
    }
    return 0;
}