#include<bits/stdc++.h>
using namespace std;
int doi_tien(int tong_tien){
    vector<int>menh_gia={1000,500,200,100,50,20,10,5,2,1};
    int dem = 0;
    int i = 0;
    while(tong_tien>0){
        dem += tong_tien/menh_gia[i];
        tong_tien %= menh_gia[i]; 
        i++;
    }
    return dem;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int tong_tien;
        cin >> tong_tien;
        cout << doi_tien(tong_tien) << endl;
    }
    return 0;
}