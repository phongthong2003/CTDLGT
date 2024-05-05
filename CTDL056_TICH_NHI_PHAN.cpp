#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll trans(ll binary_num){
    ll decima_num = 0, i = 0, remainder;
    while(binary_num!=0){
        remainder = binary_num%10;
        binary_num/=10;
        decima_num += remainder * pow(2,i);
        ++i;
    }
    return decima_num;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        ll A = trans(a);
        ll B = trans(b);
        ll tich = A*B;
        cout << tich << endl;
    }
    return 0;
}
