#include <iostream>

using namespace std;

int N, K, A[300], B[300], M = 0;

int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

    for (int i = 1; i <= 100 - K; i++) {
        for (int j = 1; j <= 100 - K; j++) {
            int cnt = 0;
            for (int k = 0; k < N; k++) {
                if (A[k] >= i && A[k] <= i + K && B[k] >= j && B[k] <= j + K) cnt++;
            }
            M = max(M, cnt);
        }
    }
    cout << M << endl;
    return 0;
}
