#include"bits/stdc++.h"
#define ll long long
using namespace std;
ll tong(vector<int>&a){
    int n = a.size();
    vector<int>dp(n,0);
    dp[0] = a[0];
    for(int i = 1; i < n; i++){
        dp[i]= a[i];
        for(int j = 0; j < i; j++){
            if(a[i]>a[j]){
                dp[i] = max(dp[i],dp[j]+a[i]);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << tong(a) << endl;
    }
    return 0;
}