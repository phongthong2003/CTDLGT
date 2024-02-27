#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         string bin;
//         cin >> bin;
//         for(int i = 0; i < bin.size(); i++){
//             if(i==0){
//                 cout << bin[i];
//             }else{
//                 if(bin[i]!=bin[i-1]){
//                     cout << 1;
//                 }else{
//                     cout << 0;
//                 }
//             }
//         }
//         cout << endl;
//     }
// }
// Ma nhi phan : 01001 --> Gray
// Gia su 01001 = A4 A3 A2 A1 A0
//         Gray = B4 B3 B2 B1 B0
// B4 = A4 = 0;
// B3 = A4 + A3 = 0 + 1 = 1;
// B2 = A3 + A2 = 1 + 0 = 1;
// B1 = A2 + A1 = 0 + 0 = 0;
// B0 = A1 + A0 = 0 + 1 = 1;
// --> MA Gray = 01101
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << s[0];
        for(int i = 1; i < s.size(); i++){
            if(s[i]!=s[i-1]){
                cout << 1;
            }else{
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}