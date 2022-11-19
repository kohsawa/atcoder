#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, h[100001], dp[100001];

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)cin >> h[i];

    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);
    for (int i = 3; i <= N; i++) dp[i] = min(abs(h[i] - h[i - 1]) + dp[i - 1], abs(h[i] - h[i - 2]) + dp[i - 2]);

    vector<int>R;
    for (int i = N; i >= 1; i -= (abs(h[i] - h[i - 1]) + dp[i - 1] == dp[i]) ? 1 : 2) R.push_back(i);
    reverse(R.begin(), R.end());

    int s = R.size();
    cout << s << endl;
    for (int i = 0; i < s; i++) {
        cout << R[i];
        if (i + 1 != s) cout << " ";
    }
    cout << endl;
    return 0;
}