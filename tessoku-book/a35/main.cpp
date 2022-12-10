#include <iostream>

using namespace std;

int N, dp[2001][2001];

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> dp[N][i];

    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i & 1) dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]);
            else dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
    cout << dp[1][1] << endl;
    return 0;
}
