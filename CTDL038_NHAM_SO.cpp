#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int a,b;
		cin >> a >> b;
		string s1 = to_string(a);
		string s2 = to_string(b);
		for(char &c : s1){
			if(c=='5') c='3';
		}
		for(char &c :s2){
			if(c=='5') c='3';
		}
		ll min_sum = stoi(s1) + stoi(s2);
		string s3 = to_string(a);
		string s4 = to_string(b);
		for(char &c:s3){
			if(c=='3') c='5';
		}
		for(char &c:s4){
			if(c=='3') c='5';
		}
		ll max_sum = stoi(s3)+stoi(s4);
		cout << min_sum <<" "<<max_sum << endl;
	}
	return 0;
}
