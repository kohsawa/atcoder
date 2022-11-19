#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, A[100001], B[100001], X[100001];

int main()
{
    cin >> N;
    for (int i = 2;i <= N;i++) cin >> A[i];
    for (int i = 3;i <= N;i++) cin >> B[i];

    X[1] = 0;
    X[2] = A[2];
    for (int i = 3;i <= N;i++) X[i] = min(X[i - 1] + A[i], X[i - 2] + B[i]);

    vector<int> R;
    for (int i = N;;) {
        R.push_back(i);
        if (i == 1) break;
        i -= (X[i - 1] + A[i] == X[i]) ? 1 : 2;
    }
    reverse(R.begin(), R.end());

    int s = R.size();
    cout << s << endl;
    for (int i = 0;i < s;i++) {
        cout << R[i];
        if (i + 1 != s) cout << " ";
    }
    cout << endl;

    return 0;
}