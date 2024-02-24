#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        string strA = to_string (a);
        string strB = to_string (b);
        for(char &c:strA){
            if(c=='3'){
                c='5';
            }
        }
        for(char &c:strB){
            if(c=='3'){
                c='5';
            }
        }
        int max_sum = stoi(strA)+stoi(strB);
        string stra = to_string (a);
        string strb = to_string (b);
        for(char &c:stra){
            if(c=='5'){
                c='3';
            }
        }
        for(char &c:strb){
            if(c=='5'){
                c='3';
            }
        }
        int min_sum = stoi(stra) + stoi(strb);
        cout << min_sum <<" "<<max_sum;
        cout << endl;
    }
    return 0;
}