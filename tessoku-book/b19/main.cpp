#include <iostream>

using namespace std;

long long N, W, w[101], v[101], dp[101][100001];

int main()
{
    cin >> N >> W;
    for (int i = 1; i <= N; i++) cin >> w[i] >> v[i];

    dp[0][0] = 0;
    for (int i = 1; i <= N * 1000; i++) dp[0][i] = -1'000'000'000'000LL;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N * 1000; j++) {
            if (j < v[i]) dp[i][j] = dp[i - 1][j];
            else {
                if (dp[i - 1][j] >= 0 && dp[i - 1][j - v[i]] >= 0) dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
                else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            }
        }
    }

    for (int i = N * 1000; i >= 0; i--) {
        if (dp[N][i] >= 0 && dp[N][i] <= W) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}