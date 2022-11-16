#include <iostream>

using namespace std;

int A[100001], R[100001];

int main()
{
    int N, K;
    int r = 2;

    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < N; i++) {
        if (i == 1) R[i] = 1;
        else R[i] = R[i - 1];

        while (R[i] < N && (A[R[i] + 1] - A[i] <= K)) {
            R[i] += 1;
        }
    }

    long long sum = 0;
    for (int i = 1; i < N; i++) {
        sum += R[i] - i;
    }
    cout << sum << endl;
    return 0;
}
