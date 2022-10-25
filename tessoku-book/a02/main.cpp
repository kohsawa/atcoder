#include <iostream>

using namespace std;

int main() {
    int N, X, A[101];
    bool flag = false;

    cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        if (A[i] == X) {
            flag = true;
            break;
        }
    }
    
    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
