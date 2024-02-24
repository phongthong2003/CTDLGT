#include<bits/stdc++.h>
using namespace std;
void sinh_xau(int n, string s= ""){
    if(n==0){
        cout << s <<" ";
        return;
    }
    sinh_xau(n-1,s+'A');
    sinh_xau(n-1,s+'B');
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        sinh_xau(n);
        cout << endl;
    }
    return 0;
}