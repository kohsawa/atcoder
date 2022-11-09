#include <iostream>

using namespace std;

int N, Q, X, Y, P[1501][1501] = { 0 }, S[1501][1501] = { 0 }, a, b, c, d;

int main()
{
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> X >> Y;
        P[X][Y] += 1;
    }

    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            S[i][j] = S[i][j - 1] + P[i][j];
        }
    }
    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            S[i][j] += S[i - 1][j];
        }
    }

    cin >> Q;

    for (int i = 1; i <= Q; i++) {
        cin >> a >> b >> c >> d;
        cout << (S[c][d] + S[a - 1][b - 1] - S[a - 1][d] - S[c][b - 1]) << endl;
    }
    return 0;
}
