#include <iostream>

using namespace std;

int A[100001], P[100001], Q[100001];

int main()
{
    int N, D, L, R;
    int p = 0, q = 0;

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        int j = N - i + 1;
        if (p <= A[i]) p = A[i];
        if (q <= A[j]) q = A[j];
        P[i] = p;
        Q[j] = q;
    }

    cin >> D;

    for (int i = 1; i <= D; i++) {
        cin >> L >> R;

        if (P[L - 1] >= Q[R + 1]) cout << P[L - 1] << endl;
        else cout << Q[R + 1] << endl;
    }

    return 0;
}
