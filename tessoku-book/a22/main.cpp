#include <iostream>
#include <algorithm>

using namespace std;

int N, A[100001] = { 0 }, B[100001] = { 0 }, dp[100001] = { 0 };

int main()
{
    cin >> N;
    for (int i = 1; i <= N - 1; i++) cin >> A[i];
    for (int i = 1; i <= N - 1; i++) cin >> B[i];
    for (int i = 2; i <= N - 1; i++) dp[i] = -10000000;

    for (int i = 1; i <= N - 1; i++) {
        dp[A[i]] = max(dp[A[i]], dp[i] + 100);
        dp[B[i]] = max(dp[B[i]], dp[i] + 150);
    }
    cout << dp[N] << endl;
    return 0;
}
