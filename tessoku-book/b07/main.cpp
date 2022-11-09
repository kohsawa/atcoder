#include <iostream>

using namespace std;

int main()
{
    int T, N, L, R, P[500001] = { 0 };
    int sum = 0;

    cin >> T;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> L >> R;
        P[L] += 1;
        P[R] -= 1;
    }

    for (int i = 0; i < T; i++) {
        sum += P[i];
        cout << sum << endl;
    }
    return 0;
}
