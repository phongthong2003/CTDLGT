#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int a[27]={},MAX = 0;
        for(int i = 0; i < s.size(); i++){
            a[s[i]-'a']++;
        }
        for(int i = 0; i < 27; i++){
            MAX = max(MAX,a[i]);
        }
        if(MAX * 2 > s.size()+1){
            cout << -1 << endl;
        }else{
            cout << 1 << endl;
        }
    }
    return 0;
}