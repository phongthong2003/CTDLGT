#include"bits/stdc++.h"
using namespace std;
#define ll long long
const ll mod = 1e9+7;
int bac_thang(int n,int k){
	vector<int>dp(n+1,0);
	dp[0] = 1;
	for(int i = 1; i <= n; i++ ){
		for(int j = 1; j <= n; j++){
			if(i - j >= 0){
				dp[i] = (dp[i]+dp[i-j])%mod;
			}
		}
	}
	return dp[n];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << bac_thang(n,k) << endl;
	}
	return 0;
}
