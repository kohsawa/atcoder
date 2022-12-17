#include <iostream>
#include <algorithm>

using namespace std;

int N, Q, A[501][501], R[501];

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++) for (int j = 1; j <= N; j++) cin >> A[i][j];
    for (int i = 1; i <= N; i++) R[i] = i;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int c, x, y;
        cin >> c >> x >> y;

        if (c == 1) swap(R[x], R[y]);
        else cout << A[R[x]][y] << endl;
    }
    return 0;
}
