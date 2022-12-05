#include <iostream>

using namespace std;

int N, M, A[101][11] = { 0 }, dp[101][1025];

int main()
{
    cin >> N >> M;
    for (int i = 1; i <= M; i++) for (int j = 1; j <= N; j++) cin >> A[i][j];

    for (int i = 0; i <= M; i++) for (int j = 0; j < 1 << N; j++) dp[i][j] = 1'000'000'000;
    dp[0][0] = 0;

    for (int i = 1; i <= M; i++) {
        for (int j = 0; j < 1 << N; j++) {
            int check[11] = { 0 };
            for (int k = 1; k <= N; k++) check[k] = (j / (1 << (k - 1))) % 2;

            int v = 0;
            for (int k = 1; k <= N; k++) if (check[k] == 1 || A[i][k] == 1) v += (1 << (k - 1));

            dp[i][j] = min(dp[i][j], dp[i - 1][j]);
            dp[i][v] = min(dp[i][v], dp[i - 1][j] + 1);
        }
    }

    if (dp[M][(1 << N) - 1] == 1'000'000'000) cout << -1 << endl;
    else cout << dp[M][(1 << N) - 1] << endl;
    return 0;
}
