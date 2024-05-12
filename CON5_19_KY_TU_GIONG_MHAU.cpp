#include"bits/stdc++.h"
using namespace std;
int same_character(int n,int x,int y,int z){
    int a[n+2];
    a[1] = x;
    a[2] = a[1]+min(x,z);
    for(int i = 3; i<=n+1;i++){
        a[i] = a[i-1]+x;
        if(i%2==0){
            a[i] = min(a[i],a[i/2]+z);
        }
        a[i] = min(a[i-1],a[i]+y);
    }
    return a[n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y,z;
        cin >> n >> x >> y >> z;
        cout << same_character(n,x,y,z) << endl;
    }
    return 0;
}