#include <iostream>

using namespace std;

int main()
{
    int N, Q, A[100001], L, R, S[100001] = { 0 };

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> L >> R;
        int d = R - L + 1;
        int win = S[R] - S[L - 1];

        if (win * 2 > d) cout << "win" << endl;
        else if (win * 2 < d) cout << "lose" << endl;
        else cout << "draw" << endl;
    }
    return 0;
}
