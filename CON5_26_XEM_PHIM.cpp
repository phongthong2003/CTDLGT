#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int c,n;
        cin >> c >> n;
        vector<int>weight(n);
        for(int i = 0; i < n; i++){
            cin >> weight[i];
        }
        sort(weight.begin(),weight.end());
        int total_weight = 0;
        int i = 0;
        while(i < n && total_weight + weight[i] <= c){
            total_weight += i;
            i++;
        }
        cout << total_weight << endl;
    }
    return 0;
}