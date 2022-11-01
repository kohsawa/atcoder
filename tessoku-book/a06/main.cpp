#include <iostream>

using namespace std;

int main()
{
    int N, Q;
    int A[100001], S[100001] = { 0 };
    int L, R;

    cin >> N >> Q;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        S[i] = S[i - 1] + A[i];
    }
    for (int i = 1; i <= Q; i++) {
        cin >> L >> R;
        cout << S[R] - S[L - 1] << endl;
    }
    return 0;
}
