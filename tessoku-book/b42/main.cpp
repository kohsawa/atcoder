#include <iostream>
#include <algorithm>

using namespace std;

int N, A[100000], B[100000];
long long AB[4][100000];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

    AB[0][0] = (A[0] + B[0] > 0) ? A[0] + B[0] : 0;
    AB[1][0] = (A[0] - B[0] > 0) ? A[0] - B[0] : 0;
    AB[2][0] = (-A[0] + B[0] > 0) ? -A[0] + B[0] : 0;
    AB[3][0] = (-A[0] - B[0] > 0) ? -A[0] - B[0] : 0;
    for (int i = 1; i < N; i++) {
        AB[0][i] = AB[0][i - 1] + ((A[i] + B[i] > 0) ? A[i] + B[i] : 0);
        AB[1][i] = AB[1][i - 1] + ((A[i] - B[i] > 0) ? A[i] - B[i] : 0);
        AB[2][i] = AB[2][i - 1] + ((-A[i] + B[i] > 0) ? -A[i] + B[i] : 0);
        AB[3][i] = AB[3][i - 1] + ((-A[i] - B[i] > 0) ? -A[i] - B[i] : 0);
    }
    cout << max({ AB[0][N - 1], AB[1][N - 1], AB[2][N - 1], AB[3][N - 1] }) << endl;
    return 0;
}
