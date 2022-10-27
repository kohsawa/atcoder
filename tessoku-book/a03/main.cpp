#include <iostream>

using namespace std;

int main()
{
    int N, K, P[100], Q[100];
    bool flag = false;

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> P[i];
        P[i] = K - P[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> Q[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (P[i] == Q[j]) {
                flag = true;
                break;
            }
        }
    }

    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
