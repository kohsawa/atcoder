#include <iostream>
#include <algorithm>

using namespace std;

int N, A[100001] = { 0 }, dp[100001] = { 0 };

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    int len = 0;
    for (int i = 1; i <= N; i++) {
        int pos = lower_bound(dp + 1, dp + len + 1, A[i]) - dp;
        dp[pos] = A[i];
        if (pos > len) len++;
    }

    cout << len << endl;
    return 0;
}
