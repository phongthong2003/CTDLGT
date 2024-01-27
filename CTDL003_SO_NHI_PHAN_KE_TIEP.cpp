#include<bits/stdc++.h>
using namespace std;
string s;
void next_binary_string(){
    int i = s.size();
    while(i-- && s[i]=='1'){
        s[i]='0';
    }
    if(i>=0){
        s[i]='1';
    }
    for(int i = 0; i < s.size(); i++){
        cout << s[i];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        next_binary_string();
        cout << endl;
    }
    return 0;
}