#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int N, X[16], Y[16];
double dp[33000][16];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];

    for (int i = 0; i < (1 << N); i++) for (int j = 0; j < N; j++) dp[i][j] = 1e9;
    dp[0][0] = 0;

    for (int i = 0; i < (1 << N); i++) {
        for (int j = 0; j < N; j++) {
            if (dp[i][j] >= 1e9) continue;

            for (int k = 0; k < N; k++) {
                if ((i / (1 << k)) % 2 == 1) continue;

                double distance = sqrt(1.0 * (X[j] - X[k]) * (X[j] - X[k]) + 1.0 * (Y[j] - Y[k]) * (Y[j] - Y[k]));
                dp[i + (1 << k)][k] = min(dp[i + (1 << k)][k], dp[i][j] + distance);
            }
        }
    }

    printf("%.12lf\n", dp[(1 << N) - 1][0]);
    return 0;
}
