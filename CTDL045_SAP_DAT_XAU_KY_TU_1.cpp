#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int a[27]={},MAX = 0;
        for(int i = 0; i < s.size(); i++){
            a[s[i]-'a']++; //nếu s[i] là ký tự 'a', thì a[s[i]-'a']++ tăng số lần xuất hiện của 'a' lên một.
        }
        for(int i = 0; i < 27; i++){
            MAX = max(MAX,a[i]); //Sau khi đã đếm số lần xuất hiện của mỗi ký tự, vòng lặp tiếp theo duyệt qua mảng a[] để tìm giá trị lớn nhất, lưu vào biến MAX.
        }
        if(MAX * 2 > s.size()+1){
            cout << -1 << endl;
            //Nếu số lần xuất hiện nhiều nhất của một ký tự nhân đôi lớn hơn kích thước của xâu cộng một 
            //(MAX * 2 > s.size() + 1), nghĩa là nếu ta có thể sắp xếp các ký tự sao cho hai ký tự giống nhau không kề nhau, chương trình in ra -1.
        }else{
            cout << 1 << endl;
        }
    }
    return 0;
}
