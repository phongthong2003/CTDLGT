#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &A, int K) {
    int left = 0, right = A.size() - 1;`
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(A[mid] == K) {
            return mid + 1;
        } else if(A[mid] < K) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int position = binary_search(A, K);
        if(position != -1) {
            cout << position << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
