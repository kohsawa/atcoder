#include <iostream>

using namespace std;

int N, K, A[100001], S[100001] = { 0 }, R[100001];

int main()
{
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }

    for (int l = 1; l <= N; l++) {
        if (l == 1) R[l] = 1;
        else R[l] = R[l - 1];

        while (R[l] <= N && S[R[l]] - S[l - 1] <= K) R[l] += 1;
    }

    long long sum = 0;
    for (int i = 1; i <= N; i++) sum += R[i] - i;
    cout << sum << endl;
    return 0;
}
