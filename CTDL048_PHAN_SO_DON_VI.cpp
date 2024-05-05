#include"bits/stdc++.h"
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll P,Q; // P tu so , Q mau so
        cin >> P >> Q;
        ll res = 0;
        while(true){
            if(Q%P==0){
                cout <<"1/"<<Q/P<<endl;
                break;
            }else{
                res = Q/P+1;
                cout <<"1/"<<res<<" + ";
                P = P * res - Q;
                Q = Q*res;
            }
        }
    }
    return 0;
}