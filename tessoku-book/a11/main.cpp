#include <iostream>

using namespace std;

int main()
{
    int N, X, A[100001];

    cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int p = 1, q = N;

    while (p <= q) {
        int i = (q + p) / 2;
        if (A[i] == X) {
            cout << i << endl;
            break;
        }

        if (A[i] > X) q = i - 1;
        else p = i + 1;
    }
    return 0;
}
