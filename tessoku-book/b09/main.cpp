#include <iostream>

using namespace std;

int Z[1502][1502] = { 0 };

int main()
{
    int N, A, B, C, D;
    int cnt = 0;

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A >> B >> C >> D;

        Z[A][B] += 1;
        Z[A][D] -= 1;
        Z[C][B] -= 1;
        Z[C][D] += 1;
    }

    for (int i = 0; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) Z[i][j] += Z[i][j - 1];
    }
    for (int i = 1; i <= 1500; i++) {
        for (int j = 0; j <= 1500; j++) Z[i][j] += Z[i - 1][j];
    }

    for (int i = 0; i <= 1500; i++) {
        for (int j = 0; j <= 1500; j++) {
            if (Z[i][j] >= 1) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}