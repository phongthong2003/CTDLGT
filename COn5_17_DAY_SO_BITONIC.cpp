#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll bintonic(int a[], int n){
    int left[n+1] = {0};//day tang
    int right[n+1] = {0};//day giam
    for(int i = 0; i < n; i++){
        left[i] = a[i];
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                left[i] = max(left[i],left[j]+a[i]);
            }
        }
    }
    for(int i = n - 1; i>=0; i--){
        right[i] = a[i];
        for(int j = n - 1; j > i; j--){
            if(a[i]>a[j]){
                right[i] = max(right[i], right[j]+ a[i]);
            }
        }
    }
    int sum_bitonic = 0;
    for(int i = 0; i < n; i++){
        sum_bitonic = max(sum_bitonic, left[i] + right[i] - a[i]); 
    }
    return sum_bitonic;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n ; i++){
            cin >> a[i];
        }
        cout << bintonic(a,n) << endl;
    }
    return 0;
}