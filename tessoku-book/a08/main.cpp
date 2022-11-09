#include <iostream>

using namespace std;
int H, W, Q, A, B, C, D;
int X[1501][1501];

int main()
{
    int p;

    cin >> H >> W;

    for (int i = 1; i <= H; i++) {
        X[i][0] = 0;
        for (int j = 1; j <= W; j++) {
            cin >> p;
            X[i][j] = X[i][j - 1] + p;
        }
    }

    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int sum = 0;
        cin >> A >> B >> C >> D;

        for (int x = A; x <= C; x++) {
            sum += X[x][D] - X[x][B - 1];
        }
        cout << sum << endl;
    }

    return 0;
}
