#include"bits/stdc++.h"
#define ll long long
using namespace std;
const ll mod = 1e9+7;
ll dp[41];
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        dp[0] = 1;
        dp[1] = 1;
        if(s[0]=='0'){
            cout <<"0"<<endl;
            return 0;
        }
        for(int i = 2; i <= n; i++){
            dp[i]= 0;
            char c1 = s[i-2]-'0', c2 = s[i-1]-'0';
            if(c1==1||(c1==2&&c2<=6)){
                dp[i] = dp[i-2];
            }
            if(s[i-1]!='0'){
                dp[i] =(dp[i]+dp[i-1])%mod;
            }
        }
        cout <<dp[n]<<endl;
    }
    return 0;
}