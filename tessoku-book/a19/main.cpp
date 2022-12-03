#include <iostream>

using namespace std;

long long N, W, w[101], v[101], dp[101][100001];

int main()
{
    cin >> N >> W;
    for (int i = 1; i <= N; i++) cin >> w[i] >> v[i];

    dp[0][0] = 0;
    for (int i = 1; i <= W; i++) dp[0][i] = -1'000'000'000'000LL;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j < w[i]) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
        }
    }

    long long m = 0;
    for (int i = 0; i <= W; i++) {
        if (m < dp[N][i]) m = dp[N][i];
    }
    cout << m << endl;
    return 0;
}
