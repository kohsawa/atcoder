#include <iostream>

using namespace std;

int N, P[2002], A[2002], dp[2002][2002] = { 0 };

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> P[i] >> A[i];

    for (int L = N - 2; L >= 0; L--) {
        for (int l = 1; l <= N - L; l++) {
            int r = L + l;
            int sl = (P[l - 1] >= l && P[l - 1] <= r) ? A[l - 1] : 0;
            int sr = (P[r + 1] >= l && P[r + 1] <= r) ? A[r + 1] : 0;
            dp[l][r] = max(dp[l - 1][r] + sl, dp[l][r + 1] + sr);
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) ans = max(ans, dp[i][i]);
    cout << ans << endl;
    return 0;
}
