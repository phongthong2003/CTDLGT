#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int>vt(n+1,1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j<i; j++){
                if(a[i]>a[j]){
                    vt[i] = max(vt[i],1+vt[j]);
                }
            }
        }
        cout <<*max_element(vt.begin(),vt.end()) << endl;
    }
    return 0;
}