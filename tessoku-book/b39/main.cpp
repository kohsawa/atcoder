#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, D, X[200000], Y[200000];
bool used[200000];
long long pay = 0;

int main()
{
    cin >> N >> D;
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
        used[i] = false;
    }

    vector<pair<int, int>> W;
    for (int i = 0; i < N; i++) W.push_back(make_pair(X[i], Y[i]));
    sort(W.begin(), W.end());

    for (int i = 1; i <= D; i++) {
        int max_pay = 0, max_id = -1;

        for (int j = 0; j < N; j++) {
            if (used[j]) continue;
            if (max_pay < W[j].second && W[j].first <= i) {
                max_pay = W[j].second;
                max_id = j;
            }
        }

        if (max_id >= 0) {
            pay += max_pay;
            used[max_id] = true;
        }
    }
    cout << pay << endl;
    return 0;
}
