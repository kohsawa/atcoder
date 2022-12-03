#include <iostream>

using namespace std;

int N, S, A[10001] = { 0 };
bool dp[61][10001] = { 0 };

int main()
{
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];

    dp[0][0] = true;
    for (int i = 1; i <= S; i++) dp[0][i] = false;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            if (j < A[i]) dp[i][j] = (dp[i - 1][j] == true);
            else dp[i][j] = (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true);
        }
    }

    if (dp[N][S]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
