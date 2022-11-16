#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N, K, A[31], A1[32770], A2[32770];

int main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> A[i];

    int n1 = N / 2, n2 = N - n1;
    int p_n1 = pow(2, n1), p_n2 = pow(2, n2);

    // これでCombinational Sumができているらしい（原理はわかっていない）
    for (int i = 0; i <= p_n2 - 1; i++) {
        int sum = 0;
        for (int j = 0; j <= n1 - 1; j++) {
            if ((i >> j) & 1) sum += A[j + 1];
        }
        A1[i + 1] = sum;
    }
    for (int i = 0; i <= p_n2 - 1; i++) {
        int sum = 0;
        for (int j = 0; j <= n2 - 1; j++) {
            if ((i >> j) & 1) sum += A[j + n1 + 1];
        }
        A2[i + 1] = sum;
    }
    sort(A2 + 1, A2 + p_n2 + 1);

    for (int i = 1; i <= p_n1; i++) {
        int pos = lower_bound(A2 + 1, A2 + p_n2 + 1, K - A1[i]) - A2;
        if (pos <= p_n2 && A2[pos] + A1[i] == K) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
