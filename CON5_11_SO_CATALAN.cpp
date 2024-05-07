#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull catanlan_number(int n){
    if(n<=1){
        return 1;
    }
    ull res = 0;
    for(int i = 0; i < n; i++){
        res+=catanlan_number(i)*catanlan_number(n-i-1);
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << catanlan_number (n) << endl;
    }
    return 0;
}