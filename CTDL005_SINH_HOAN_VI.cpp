#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000];
void nhap(ll a[], int n){
    for(ll i = 1; i <= n; i++){
        a[i]=i;
    }
}
void xuat(ll a[], int n){
    for(ll i = 1; i <= n; i++){
        cout << a[i];
    }
    cout <<" ";
}
void lietke(ll a[], int n){
    do{
        xuat(a,n);
    }while(next_permutation(a+1,a+n+1));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        nhap(a,n);
        lietke(a,n);
        cout << endl;
    }
    return 0;
}