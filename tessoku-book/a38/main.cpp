#include <iostream>

using namespace std;

int D, N, L[10001], R[10001], H[10001], W[366], sum = 0;

int main()
{
    cin >> D >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i] >> H[i];
    for (int i = 1; i <= D; i++) W[i] = 24;

    for (int i = 1; i <= N; i++) for (int j = L[i]; j <= R[i]; j++) W[j] = min(W[j], H[i]);
    for (int i = 1; i <= D; i++) sum += W[i];
    cout << sum << endl;
    return 0;
}
