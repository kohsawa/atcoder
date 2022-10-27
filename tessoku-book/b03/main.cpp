#include <iostream>

using namespace std;

int main()
{
    int N, A[1000];
    bool flag = false;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (A[i] + A[j] + A[k] == 1000) {
                    flag = true;
                    break;
                }
            }
        }
    }

    if (flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}
