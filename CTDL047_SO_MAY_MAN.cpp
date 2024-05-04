#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int check4 = 0, check7 = 0;
        for(int i = n/7; i>= 0; i--){
            if((n-i*7)%4==0){
                check4 = (n-i*7)/4;
                check7 = (n-check4*4)/7;
                break;
            }
        }
        if(check4==0&&check7==0){
            cout << -1 << endl;
        }else{
            for(int i = 1; i <= check4; i++ ){
                cout << 4;
            }
            for(int j = 1; j <= check7; j++){
                cout << 7;
            }
            cout << endl;
        }
    }
    return 0;
}