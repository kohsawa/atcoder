#include <iostream>
#include <algorithm>

using namespace std;

int N, dp[1001][1001] = { 0 };
string S;

int main()
{
    cin >> N; cin >> S;

    dp[N][N] = 1;
    for (int i = 1; i < N; i++) {
        dp[i][i] = 1;
        dp[i][i + 1] = (S[i - 1] == S[i]) ? 2 : 1;
    }

    for (int l_sec = 2; l_sec <= N - 1; l_sec++) {
        for (int l = 1; l <= N - l_sec; l++) {
            int r = l + l_sec;

            if (S[l - 1] == S[r - 1]) dp[l][r] = max({ dp[l + 1][r], dp[l][r - 1], dp[l + 1][r - 1] + 2 });
            else dp[l][r] = max({ dp[l + 1][r], dp[l][r - 1] });
        }
    }
    cout << dp[1][N] << endl;
    return 0;
}
