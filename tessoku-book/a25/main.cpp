#include <iostream>

using namespace std;

int H, W;
long long dp[31][31] = { 0 };
string Map[31];

int main()
{
    cin >> H >> W;
    for (int i = 0; i < H; i++) cin >> Map[i];

    for (int i = 1; i < H; i++) {
        if (Map[i][0] == '#') break;
        dp[i][0] = 1;
    }
    for (int i = 1; i < W; i++) {
        if (Map[0][i] == '#') break;
        dp[0][i] = 1;
    }

    for (int i = 1; i < H; i++) {
        for (int j = 1; j < W; j++) {
            if (Map[i][j] == '.') dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    cout << dp[H - 1][W - 1] << endl;
    return 0;
}
