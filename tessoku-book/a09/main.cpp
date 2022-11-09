#include <iostream>

using namespace std;

int Z[1502][1502] = { 0 };

int main()
{
    int H, W, N, A, B, C, D;

    cin >> H >> W >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A >> B >> C >> D;

        Z[A][B] += 1;
        Z[A][D + 1] -= 1;
        Z[C + 1][B] -= 1;
        Z[C + 1][D + 1] += 1;
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) Z[i][j] += Z[i][j - 1];
    }
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) Z[i][j] += Z[i - 1][j];
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (j >= 2) cout << " ";
            cout << Z[i][j];
        }
        cout << endl;
    }
    return 0;
}
