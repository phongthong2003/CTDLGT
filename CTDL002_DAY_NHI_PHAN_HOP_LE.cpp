#include<bits/stdc++.h>
using namespace std;
void legal_binary(string &s, int index ){
    if(index == s.length()){
        cout << s << endl;
        return;
    }
    if(s[index]=='?'){
        s[index]='0';
        legal_binary(s,index+1);
        s[index]='1';
        legal_binary(s,index+1);
        s[index]='?';
    }else{
        legal_binary(s,index+1);
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        legal_binary(s,0);
    }
    return 0;

}