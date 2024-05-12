#include"bits/stdc++.h"
using namespace std;
#define ll long long 
const ll mod = 1e9+7;
ll tong_chuoi_con(string s){
    ll prev = s[0]-'0', res = prev;
    for(int i = 1; i < s.length();i++){
        prev = (prev * 10 + (s[i]-'0')*(i+1))%mod;
        res = (res + prev)%mod;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout << tong_chuoi_con (s) << endl;
    }
    return 0;
}