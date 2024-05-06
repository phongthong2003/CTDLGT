#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>>a(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        vector<vector<int>>dp(n, vector<int>(m));
        int maxsize = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i==0||j==0){
                    dp[i][j] = a[i][j];
                }else if(a[i][j]==1){
                    dp[i][j] = min ({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                }
                maxsize = max(maxsize,dp[i][j]);
            }
        }
        cout << maxsize << endl;
    }
    return 0;
}