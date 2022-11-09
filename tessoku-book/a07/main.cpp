#include <iostream>

using namespace std;

int main()
{
    int D, N, P[100001] = { 0 }, L[100001], R[100001];

    cin >> D;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> L[i] >> R[i];

        for (int j = L[i]; j <= R[i]; j++) {
            P[j] += 1;
        }
    }

    for (int i = 1; i <= D; i++) {
        cout << P[i] << endl;
    }
    return 0;
}
