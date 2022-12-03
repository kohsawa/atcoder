#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

string S, T;
int dp[2001][2001] = { 0 };

int main()
{
    cin >> S; cin >> T;
    int lS = S.size(), lT = T.size();

    for (int i = 1; i <= lS; i++) dp[i][0] = i;
    for (int j = 1; j <= lT; j++) dp[0][j] = j;

    for (int i = 1; i <= lS; i++) {
        for (int j = 1; j <= lT; j++) {
            if (S[i - 1] == T[j - 1]) dp[i][j] = min({ dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] });
            else dp[i][j] = min({ dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1] }) + 1;
        }
    }
    cout << dp[lS][lT] << endl;
    return 0;
}
