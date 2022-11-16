#include <iostream>
#include <algorithm>

using namespace std;

int N, K, A[1001], B[1001], C[1001], D[1001], AB[1000001], CD[1000001];

int main()
{
    cin >> N >> K;

    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) cin >> B[i];
    for (int i = 1; i <= N; i++) cin >> C[i];
    for (int i = 1; i <= N; i++) cin >> D[i];

    int idx = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            AB[idx] = A[i] + B[j];
            CD[idx++] = C[i] + D[j];
        }
    }

    sort(CD + 1, CD + N * N + 1);

    bool flag = false;
    for (int i = 1; i <= N * N; i++) {
        int pos = lower_bound(CD + 1, CD + N * N + 1, K - AB[i]) - CD;
        if (pos <= N * N && CD[pos] == K - AB[i]) {
            flag = true;
            break;
        }
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
