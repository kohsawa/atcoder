#include <iostream>

using namespace std;

int N, X, Y, A[100001], grundy[100001] = { 0 };

int main()
{
    cin >> N >> X >> Y;
    for (int i = 1; i <= N; i++) cin >> A[i];

    for (int i = 1; i < X; i++) grundy[i] = 0;
    for (int i = X; i <= 100000; i++) {
        bool G[3] = { true, true, true };
        G[grundy[i - X]] = false;
        if (i >= Y) G[grundy[i - Y]] = false;

        if (G[0]) grundy[i] = 0;
        else if (G[1]) grundy[i] = 1;
        else grundy[i] = 2;
    }

    int xor_sum = 0;
    for (int i = 1; i <= N; i++) xor_sum ^= grundy[A[i]];
    cout << ((xor_sum == 0) ? "Second" : "First") << endl;
    return 0;
}
