#include<bits/stdc++.h>
using namespace std;
int trans(int n){
	return n^(n>>1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << trans(n) << endl;
	}
	return 0;
}
