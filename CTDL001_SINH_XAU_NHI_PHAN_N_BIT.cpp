#include<bits/stdc++.h>
using namespace std;
void sinh_nhi_phan(int n){
    vector<int>binary_string(n,0);
    while(true){
        for(int i = 0; i < n; i++){
            cout << binary_string[i]<<" ";
        }
        cout << endl;
        int i = n- 1;
        while(i >= 0 && binary_string[i]==1){
            binary_string[i] = 0; 
            --i;
        }
        if(i<0){
            break;
        }
        binary_string[i]=1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        sinh_nhi_phan(n);
    }
    return 0;
}