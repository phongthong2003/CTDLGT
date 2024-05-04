#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> k;
		cin >> s;
		ll l = s.length();
		if(l > 7){
			return 0;
		}
		for(int i = 0; i <= l - 1; i ++){
			char c = s[l-1];
			int x = l-1;
			for(int j = x; j > i && k >0; --j){
				if(c < s[j]){
					c = s[j];
					x = j;
				}
			}
			if(c > s[i] && x > 0){
				swap(s[i],s[x]);
				k--;
			}
		}
		cout << s << endl;
	}
	return 0;
}
