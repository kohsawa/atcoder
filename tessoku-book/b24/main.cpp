#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, X[100000], Y[100000];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];

    vector<pair<int, int>> boxes;
    for (int i = 0; i < N; i++) boxes.push_back(make_pair(X[i], -Y[i]));
    sort(boxes.begin(), boxes.end());

    vector<int> sY;
    for (int i = 0; i < N; i++) sY.push_back(-boxes[i].second);

    int len = 0, dp[100001] = { 0 };
    for (int i = 0; i < N; i++) {
        int pos = lower_bound(dp + 1, dp + len + 1, sY[i]) - dp;
        dp[pos] = sY[i];
        if (pos > len) len++;
    }

    cout << len << endl;
    return 0;
}
