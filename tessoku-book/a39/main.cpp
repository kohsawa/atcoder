#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, L[300000], R[300000];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> L[i] >> R[i];

    vector<pair<int, int>> M;
    for (int i = 0; i < N; i++) M.push_back(make_pair(L[i], R[i]));
    sort(M.begin(), M.end(), [](auto& left, auto& right) {return left.second < right.second;});

    int t = 0, c = 0;
    for (int i = 0; i < N; i++) {
        if (t > M[i].first) continue;
        t = M[i].second;
        c++;
    }
    cout << c << endl;
    return 0;
}
